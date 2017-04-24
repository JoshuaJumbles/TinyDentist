using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEditor;

[CustomEditor(typeof(TeethGenerator))]
public class TeethGeneratorEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();
        
        TeethGenerator myScript = (TeethGenerator)target;
        if(GUILayout.Button("Build Teeth"))
        {
           myScript.BuildTeeth();
        }

		if(GUILayout.Button("Clear Teeth"))
        {
           myScript.ClearTeeth();
        }
    }
}