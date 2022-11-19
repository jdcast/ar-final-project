# Graphics and Networking README
As it stands I think my contribution is concentrated under three resources. The first is found under *Sample Scene*, the second is under *Laucnher.cs* and the third is under *Mesh_Controller.cs*. 

## The Sample Scene 
The sample scene can be thought of as a very simple multiplayer game. One can play this game locally with multiple clients by running the scene in the unity editor while also running a precompiled executable of the game. The scene provides a few functionalities.
1. Players are able to rotate around the world origin by using left or right click.
2. Players can deform any available mesh (which by default is just a plane but this can be quickly changed via the unity editor) by using a mouse-3 click. Note that this deformation does not change the topology of the mesh and instead only moves the vertices around.
3. Players can extrude additional vertices from the mesh by using a mouse-4 click. 
4. Players can load in a brand new mesh by using the Q key. By default this mesh is a vertical plane. 
Although this sample scene is far from what we want our final product to be, it is a good demo to be able to test different features with respect to mesh manipulation. This sample scene also imposes a non-trivial constraint on our system, namely that all meshes in our scene must be children of a known object called `Mesh holder`.

## Launcher.cs
This script has a lot of common elements, such as spawning a player once they join the room, which I will not go over. However, it is important to note that on line 19 `Photon.RegisterType` is used on the type `Mesh`. It is also important to note that any runtime environment which wishes to serialize meshes using photon must call this method as this is what allows us to serialize meshes over the network. I don't think anyone but Jacob should really have to worry about how this is done but for those who are curious, further down in the file we do two things
1. We first define a class `SerializableMeshInfo` which decomposes (and reassembles) a `Mesh` object into a list of serializable fields. 
2. After this, we define two functions to serialize and de-serialize an object of `SerializableMeshInfo` by using C# built in binary formatters. Hence the overall process looks like this `Mesh`->`SerializableMeshInfo`->`bytes`->`SerializableMeshInfo`->`Mesh`.

## Mesh_Controller.cs

### Class fields
Starting from the top of this file we have the following 
1. Several list of items pertaining to some data which may be useful to have on hand. In actuality, this was a poor design decision by Jacob and they aren't needed at all. I would suggest not using them.
2. A list of bytes corresponding to different events. Whenever we wish to use a new event, which will probably be connected to some user action, we have to assign that event a unique byte code.

### Middle of the file
The `Start()`, `Update()`, `OnEnable()`, and `OnEvent()` functions are pretty standard and there isn't much to discuss. The bits which are complicated are tied to their specific use within the sample scene and will undoubtably change over time. 

### Bottom of the file
From `addNewMeshEvent()` to `addVertexToMeshResponse` we can find the "networking functions". These are some functions I made which have to do with transmitting data over a network. I have written this such that functions of the form `*Event()` parse the input parameters and call `PhotonNetwork.RaiseEvent` meanwhile functions of the form `*Response()` parse the output of `EventData.CustomData` and does the needed modifications to local data.
- `addNewMeshEvent()`: Not very interesting. Raises an event and passes the mesh as the event content (note that our previous work with mesh serialization is what allows us to do this).
- `addNewMeshResponse()`: This function receives a mesh from the appropriate event. Then, a child of our `Mesh holder` object is created and the mesh is assigned to it.
- `modifyVerticesNearPointEvent()`: Not very interesting. Sends a point as the content of the event.
- `modifyVerticesNearPointResponse()`: This function receives a point (presumably near a mesh) and then modifies all the vertices on all the meshes in our scene based on what function `f` was passed in as a parameter. Intuitively, I designed this such that the point we receive can be thought of as where our end user is "touching" or "interacting" and `f` specifies what the interaction is. If we want the user to "pull points towards themselves" we could, for example, pass in a `f` such that vertices are translated towards our point.
- `addVertexToMeshEvent()`: Mildly interesting. I want to send three pieces of information, 1. what mesh are we adding a vertex to? 2. where is that vertex located? 3. What triangle on the mesh are we appending this vertex to? We are able to send this information over the network by parsing all this data into an array of floats.
- `addVertexToMeshResponse()`: This functions takes in the an `int` which specifies an object (presumably with a mesh of interest), a point which represents where we wish to add a new vertex, and another `int` which specifies what triangle on the mesh we wish to append the vertex. From there, a new mesh is generated as desired and the new mesh replaces the mesh of the specified object.
- `AddElevatedVertex()`: This function appends a vertex on a mesh by first finding the vertices which correspond to the triangle which will be appended. Then the function connects are the previously mentioned vertices with the new point which we wish to append. Finally, the function creates a new mesh which includes the vertices and triangles of the original, along with the new vertex and the three new triangles generated by appending our new vertex.
