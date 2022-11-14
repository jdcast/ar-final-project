/// TCPClient for HL2
/// 1. https://medium.datadriveninvestor.com/connecting-the-microsoft-hololens-and-raspberry-pi3b-58665032964c
/// 2. https://stackoverflow.com/questions/46964007/python-socket-connection-between-raspberry-pi-s
/// 3. https://stackoverflow.com/questions/56194446/send-big-file-over-socket
/// 4. https://nikhilroxtomar.medium.com/file-transfer-using-tcp-socket-in-python3-idiot-developer-c5cf3899819c

using System;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;

namespace Scripts
{
    public class TCPClient : MonoBehaviour
    {
        // server ip address and port
        [SerializeField] private string host = "10.203.94.234";
        [SerializeField] private string port = "8081";

        // route manipulator for instantiating retrieved hold routes
        [SerializeField] private RouteManipulator routeManipulator = default;

#if !UNITY_EDITOR
    private bool _useUWP = true;
    private Windows.Networking.Sockets.StreamSocket socket;
#endif

#if UNITY_EDITOR
        private bool _useUWP = false;
        System.Net.Sockets.TcpClient client;
        System.Net.Sockets.NetworkStream stream;
#endif

        private StreamWriter writer;
        private StreamReader reader;

        private int BUFFER_SIZE = 1024;

        public void Connect()
        {
            if (_useUWP)
            {
                ConnectUWP(host, port);
            }
            else
            {
                ConnectUnity(host, port);
            }
        }

#if UNITY_EDITOR
        private void ConnectUWP(string host, string port)
#else
    private async void ConnectUWP(string host, string port)
#endif
        {
#if UNITY_EDITOR
            errorStatus = "UWP TCP client used in Unity!";
#else
        try
        {
            socket = new Windows.Networking.Sockets.StreamSocket();
            Windows.Networking.HostName serverHost = new Windows.Networking.HostName(host);
            await socket.ConnectAsync(serverHost, port);

            Stream streamOut = socket.OutputStream.AsStreamForWrite();
            writer = new StreamWriter(streamOut) { AutoFlush = true };

            Stream streamIn = socket.InputStream.AsStreamForRead();
            reader = new StreamReader(streamIn);

            successStatus = "Connected!";
        }
        catch (Exception e)
        {
            errorStatus = e.ToString();
        }
#endif
        }

        private void ConnectUnity(string host, string port)
        {
#if !UNITY_EDITOR
        errorStatus = "Unity TCP client used in UWP!";
#else
            try
            {
                client = new System.Net.Sockets.TcpClient(host, Int32.Parse(port));
                stream = client.GetStream();
                reader = new StreamReader(stream);
                writer = new StreamWriter(stream) { AutoFlush = true };

                successStatus = "Connected!";
            }
            catch (Exception e)
            {
                errorStatus = e.ToString();
            }
#endif
        }

        private string errorStatus = null;
        private string successStatus = null;

        public void Update()
        {
            if (errorStatus != null)
            {
                Debug.Log(errorStatus);
                errorStatus = null;
            }
            if (successStatus != null)
            {
                Debug.Log(successStatus);
                successStatus = null;
            }
        }

        /// <summary>
        /// Sends a file to server
        /// NOTE: must be async because we are using threading: https://stackoverflow.com/questions/45717656/losing-variable-after-async-call.  
        /// Once a synchronous function sees an await, it will turn over control and when it resumes,
        /// a new thread with a new context will take over after the await.  Thus, object references will be null after the await if using a synchronous call.
        /// NOTE: the reader must be async as otherwise it hangs the main thread in unity and the app exits when trying to perform Read()
        /// </summary>
        /// <param name="filename"></param>
        /// <returns></returns>
        public async Task SendFile(string filename = "")
        {
            try
            {
                //Debug.Log($"filename: {filename}");

                // notify server of endpoint to use
                writer.Write("receiveFile");
                //Debug.Log("written");

                // get receipt confirmation
                char[] response = new char[BUFFER_SIZE];
                await reader.ReadAsync(response, 0, BUFFER_SIZE);
                string responseStr = new string(response);
                responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
                if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }

                //Debug.Log($"response: {responseStr}");
                //Debug.Log(writer);
                //Debug.Log("sending filename...");

                // send filename
                writer.Write(filename);

                // get receipt confirmation
                response = new char[BUFFER_SIZE]; // reset buffer so we don't accrue/read garabage accidentally for different size buffers
                await reader.ReadAsync(response, 0, BUFFER_SIZE);
                responseStr = new string(response);
                responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
                if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }

                //Debug.Log($"response: {responseStr}");

                //Debug.Log("sending file contents...");

                // send file contents
                string path = Path.Combine(Application.persistentDataPath, filename);
                using (TextReader sr = File.OpenText(path))
                {
                    string s = "";
                    while ((s = sr.ReadLine()) != null)
                    {
                        // send line of file to server
                        //Debug.Log($"Tx: {s}");
                        writer.Write(s + "\n");

                        // get receipt confirmation
                        response = new char[BUFFER_SIZE]; // reset buffer so we don't accrue/read garabage accidentally for different size buffers
                        await reader.ReadAsync(response, 0, BUFFER_SIZE);
                        responseStr = new string(response);
                        responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
                        if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }

                        //Debug.Log($"response: {responseStr}");
                    }

                    // signal done to server
                    //Debug.Log("Tx: Finished");
                    writer.Write("done");
                }
            }
            catch (Exception e)
            {
                Debug.Log(e.ToString());
            }
        }

        public void CloseConnection()
        {
#if UNITY_EDITOR
            stream.Close();
            client.Close();
            writer.Close();
            reader.Close();

            stream = null;
#else
        socket.Dispose();
        writer.Dispose();
        reader.Dispose();

        socket = null;
#endif
            writer = null;
            reader = null;
        }

        /// <summary>
        /// Perform cleanup
        /// NOTE: OnApplicationFocus used because OnDestroy are not reliabe on HL2 headset and also because OnApplicatoinQuit and OnDisable don't appear to
        /// be called when the app is exited by user on HL2.  Also, not clear if this function is called on app crashes.  However, OnApplicationFocus gets
        /// called if click out of play screen in Unity Play mode, which is annoying.  So we use OnDestroy when running on Unity Play mode.
        /// https://stackoverflow.com/questions/28647118/detect-application-quit-with-unity
        /// </summary>
#if UNITY_EDITOR
        private void OnDestroy()
        {
            writer.Write("closeSock");
            CloseConnection();
        }
#else
    void OnApplicationFocus(bool focus)
    {
        if (!focus)
        {
            Debug.Log("OnApplicationFocus");
            writer.Write("closeSock");
            CloseConnection();
        }
    }
#endif

        /// <summary>
        /// Retrieves the saved route from the server
        /// TODO: maybe use serialization/deserialization and/or JSON?
        /// </summary>
        public async Task<(List<string> holds, List<Vector3> positions, List<Quaternion> rotations)> GetRoute(string route)
        {
            // list of hold names and their respective transforms
            List<string> holds = new List<string>();
            List<Vector3> positions = new List<Vector3>();
            List<Quaternion> rotations = new List<Quaternion>();

            // notify server of endpoint
            writer.Write("sendFile");

            // get receipt
            char[] response = new char[BUFFER_SIZE];
            await reader.ReadAsync(response, 0, BUFFER_SIZE);
            string responseStr = new string(response);
            responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
            if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return (holds, positions, rotations); }

            // notify server of route to retrieve
            string filename = route + ".txt";
            writer.Write(filename);

            // get file line-by-line
            while (true)
            {
                response = new char[BUFFER_SIZE]; // reset buffer so we don't accrue/read garabage accidentally for different size buffers
                await reader.ReadAsync(response, 0, BUFFER_SIZE);
                responseStr = new string(response);
                responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
                if (responseStr.Length <= 0 || responseStr.Equals("done")) { break; }

                // semi-colon delimited string with position and rotation comma-delimited of form:
                // "holdname;transform.position;transform.rotation"
                String[] holdInfo = responseStr.Split(';');

                // collect hold name
                holds.Add(holdInfo[0]);

                // collect position
                string[] positionStr = holdInfo[1].Split(',');
                Vector3 position = new Vector3(float.Parse(positionStr[0].Trim()), float.Parse(positionStr[1].Trim()), float.Parse(positionStr[2].Trim()));
                positions.Add(position);

                // collect rotation
                string[] rotationStr = holdInfo[2].Split(',');
                Quaternion rotation = new Quaternion(float.Parse(rotationStr[0].Trim()),
                    float.Parse(rotationStr[1].Trim()),
                    float.Parse(rotationStr[2].Trim()),
                    float.Parse(rotationStr[3].Trim()));
                rotations.Add(rotation);

                // send ready signal to server to get next line of file (if there is one)
                writer.Write("ready");
            }

            return (holds, positions, rotations);
        }

        /// <summary>
        /// Gets list of routes stored on server
        /// </summary>
        /// <returns></returns>
        public async Task<List<string>> GetRouteList()
        {
            List<string> routeList = new List<string>();

            // notify server of endpoint
            writer.Write("listFiles");

            // get list of filenames
            while (true)
            {
                char[] response = new char[BUFFER_SIZE];
                await reader.ReadAsync(response, 0, BUFFER_SIZE);
                string responseStr = new string(response);
                responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
                if (responseStr.Length <= 0 || responseStr.Equals("done")) { break; }

                // trim file extension, i.e. .txt
                responseStr = Path.GetFileNameWithoutExtension(responseStr);
                routeList.Add(responseStr);

                // send ready signal to server to get next file (if there is one)
                writer.Write("ready");
            }

            //// print what we got
            //for (int i = 0; i < routeList.Count; i++)
            //{
            //    Debug.Log($"retreived route: {routeList[i]}");
            //}

            return routeList;
        }
    }
}