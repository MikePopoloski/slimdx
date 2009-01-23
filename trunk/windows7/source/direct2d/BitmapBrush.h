/*
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
#pragma once

#include "Brush.h"
#include "BrushProperties.h"
#include "BitmapBrushProperties.h"
#include "Bitmap.h"

namespace SlimDX
{
	namespace Direct2D
	{
		public ref class BitmapBrush : Brush
		{
			COMOBJECT(ID2D1BitmapBrush, BitmapBrush);
			
		public:
			BitmapBrush( RenderTarget^ renderTarget, Bitmap^ bitmap );
			BitmapBrush( RenderTarget^ renderTarget, Bitmap^ bitmap, BitmapBrushProperties bitmapBrushProperties );
			BitmapBrush( RenderTarget^ renderTarget, Bitmap^ bitmap, BitmapBrushProperties bitmapBrushProperties, BrushProperties brushProperties );

			static BitmapBrush^ FromPointer( System::IntPtr pointer );

			property Bitmap^ Bitmap
			{
				SlimDX::Direct2D::Bitmap^ get();
				void set( SlimDX::Direct2D::Bitmap^ value );
			}

			property ExtendMode HorizontalExtendMode
			{
				ExtendMode get();
				void set( ExtendMode value );
			}

			property ExtendMode VerticalExtendMode
			{
				ExtendMode get();
				void set( ExtendMode value );
			}

			property InterpolationMode InterpolationMode
			{
				SlimDX::Direct2D::InterpolationMode get();
				void set( SlimDX::Direct2D::InterpolationMode value );
			}
		};
	}
}