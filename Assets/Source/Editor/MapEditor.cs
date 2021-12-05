// using UnityEngine;
// using UnityEditor;
//
//
// [CustomEditor(typeof(LevelConfig))]
// public class LevelEditor : Editor
// {
//     public bool showLevels = true;
//
//     public override void OnInspectorGUI()
//     {
//         if (true)
//             return;
//         
//         LevelConfig levels = (LevelConfig)target;
//         EditorGUILayout.Space();
//
//         if (levels.Maps.Length == 0 || levels.Maps == null)
//         {
//             levels.Maps = new MapConfig[1];
//         }
//
//         // showLevels = EditorGUILayout.Foldout(showLevels, "Levels (" + levels.Maps.Length + ")");
//         // if (showLevels)
//         {
//             EditorGUI.indentLevel++;
//             for (ushort i = 0; i < levels.Maps.Length; i++)
//             {
//
//                 // levels.Maps[i].showBoard = EditorGUILayout.Foldout(levels.Maps[i].showBoard, "Board");
//                 // if (levels.allLevels [i].showBoard)
//                 {
//
//                     EditorGUI.indentLevel = 0;
//
//                     GUIStyle tableStyle = new GUIStyle("box");
//                     tableStyle.padding = new RectOffset(10, 10, 10, 10);
//                     tableStyle.margin.left = 32;
//
//                     GUIStyle headerColumnStyle = new GUIStyle();
//                     headerColumnStyle.fixedWidth = 35;
//
//                     GUIStyle columnStyle = new GUIStyle();
//                     columnStyle.fixedWidth = 65;
//
//                     GUIStyle rowStyle = new GUIStyle();
//                     rowStyle.fixedHeight = 25;
//
//                     GUIStyle rowHeaderStyle = new GUIStyle();
//                     rowHeaderStyle.fixedWidth = columnStyle.fixedWidth - 1;
//
//                     GUIStyle columnHeaderStyle = new GUIStyle();
//                     columnHeaderStyle.fixedWidth = 30;
//                     columnHeaderStyle.fixedHeight = 25.5f;
//
//                     GUIStyle columnLabelStyle = new GUIStyle();
//                     columnLabelStyle.fixedWidth = rowHeaderStyle.fixedWidth - 6;
//                     columnLabelStyle.alignment = TextAnchor.MiddleCenter;
//                     columnLabelStyle.fontStyle = FontStyle.Bold;
//
//                     GUIStyle cornerLabelStyle = new GUIStyle();
//                     cornerLabelStyle.fixedWidth = 42;
//                     cornerLabelStyle.alignment = TextAnchor.MiddleRight;
//                     cornerLabelStyle.fontStyle = FontStyle.BoldAndItalic;
//                     cornerLabelStyle.fontSize = 14;
//                     cornerLabelStyle.padding.top = -5;
//
//                     GUIStyle rowLabelStyle = new GUIStyle();
//                     rowLabelStyle.fixedWidth = 25;
//                     rowLabelStyle.alignment = TextAnchor.MiddleRight;
//                     rowLabelStyle.fontStyle = FontStyle.Bold;
//
//                     GUIStyle enumStyle = new GUIStyle("popup");
//                     rowStyle.fixedWidth = 65;
//
//                     EditorGUILayout.BeginHorizontal(tableStyle);
//                     for (int x = -1; x < levels.Maps[i]._column; x++)
//                     {
//                         EditorGUILayout.BeginVertical((x == -1) ? headerColumnStyle : columnStyle);
//                         for (int y = -1; y < levels.Maps[i]._rows; y++)
//                         {
//                             if (x == -1 && y == -1)
//                             {
//                                 EditorGUILayout.BeginVertical(rowHeaderStyle);
//                                 EditorGUILayout.LabelField("[X,Y]", cornerLabelStyle);
//                                 EditorGUILayout.EndHorizontal();
//                             }
//                             else if (x == -1)
//                             {
//                                 EditorGUILayout.BeginVertical(columnHeaderStyle);
//                                 EditorGUILayout.LabelField(y.ToString(), rowLabelStyle);
//                                 EditorGUILayout.EndHorizontal();
//                             }
//                             else if (y == -1)
//                             {
//                                 EditorGUILayout.BeginVertical(rowHeaderStyle);
//                                 EditorGUILayout.LabelField(x.ToString(), columnLabelStyle);
//                                 EditorGUILayout.EndHorizontal();
//                             }
//
//                             if (x >= 0 && y >= 0)
//                             {
//                                 EditorGUILayout.BeginHorizontal(rowStyle);
//                                 levels.Maps[i]._map[x,y] =
//                                     (MapCellType)EditorGUILayout.EnumPopup(levels.Maps[i]._map[x,y], enumStyle);
//                                 EditorGUILayout.EndHorizontal();
//                             }
//                         }
//                         EditorGUILayout.EndVertical();
//                     }
//                     EditorGUILayout.EndHorizontal();
//                 }
//             }
//         }
//         EditorUtility.SetDirty(target);
//     }
// }