﻿/*
* Copyright (c) 2007-2008 SlimDX Group
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/
using System.Runtime.InteropServices;
using SampleFramework;
using SlimDX;
using SlimDX.Direct3D9;

namespace Asteroids
{
    /// <summary>
    /// Defines a vertex for vector models.
    /// </summary>
    struct VectorModelVertex
    {
        /// <summary>
        /// Gets or sets the position.
        /// </summary>
        /// <value>The position.</value>
        [VertexElement(DeclarationType.Float2, DeclarationUsage.Position)]
        public Vector2 Position
        {
            get;
            set;
        }

        /// <summary>
        /// Gets or sets the color.
        /// </summary>
        /// <value>The color.</value>
        [VertexElement(DeclarationType.Color, DeclarationUsage.Color)]
        public int Color
        {
            get;
            set;
        }

        /// <summary>
        /// Gets or sets the padding.
        /// </summary>
        /// <value>The padding.</value>
        [VertexElement(DeclarationType.Float1, DeclarationUsage.TextureCoordinate)]
        public float Padding
        {
            get;
            set;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="VectorModelVertex"/> struct.
        /// </summary>
        /// <param name="position">The position.</param>
        /// <param name="color">The color.</param>
        public VectorModelVertex(Vector2 position, int color)
            : this()
        {
            // store variables
            Position = position;
            Color = color;
        }

        /// <summary>
        /// Gets the size, in bytes, of the <see cref="VectorModelVertex"/> structure.
        /// </summary>
        /// <value>The size in bytes.</value>
        public static int SizeInBytes
        {
            get { return Marshal.SizeOf(typeof(VectorModelVertex)); }
        }
    }
}