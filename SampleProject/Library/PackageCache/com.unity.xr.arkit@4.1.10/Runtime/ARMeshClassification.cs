using System.ComponentModel;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// A value describing the classification of a mesh face.
    /// </summary>
    public enum ARMeshClassification : byte
    {
        /// <summary>
        /// The face type of the mesh is unknown.
        /// </summary>
        [Description("None")]
        None = 0,

        /// <summary>
        /// The face type of the mesh is wall.
        /// </summary>
        [Description("Wall")]
        Wall,

        /// <summary>
        /// The face type of the mesh is floor.
        /// </summary>
        [Description("Floor")]
        Floor,

        /// <summary>
        /// The face type of the mesh is ceiling.
        /// </summary>
        [Description("Ceiling")]
        Ceiling,

        /// <summary>
        /// The face type of the mesh is table.
        /// </summary>
        [Description("Table")]
        Table,

        /// <summary>
        /// The face type of the mesh is seat.
        /// </summary>
        [Description("Seat")]
        Seat,

        /// <summary>
        /// The face type of the mesh is window.
        /// </summary>
        [Description("Window")]
        Window,

        /// <summary>
        /// The face type of the mesh is door.
        /// </summary>
        [Description("Door")]
        Door,
    }
}
