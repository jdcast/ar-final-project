using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// Allow for custom tags to be added via script as well as multiple tags per object
/// reference: https://answers.unity.com/questions/1470694/multiple-tags-for-one-gameobject.html
/// </summary>
public class CustomTag : MonoBehaviour
{
    [SerializeField]
    private List<string> tags = new List<string>();

    public List<string> Tags
    {
        get { return tags; }
        set { tags = value; }
    }

    public bool HasTag(string tag)
    {
        return tags.Contains(tag);
    }

    public IEnumerable<string> GetTags()
    {
        return tags;
    }

    public void Rename(int index, string tagName)
    {
        tags[index] = tagName;
    }

    public string GetAtIndex(int index)
    {
        return tags[index];
    }

    public int Count
    {
        get { return tags.Count; }
    }

    public void RemoveTag(string tag)
    {
        tags.RemoveAll(t => t == tag);
    }
}