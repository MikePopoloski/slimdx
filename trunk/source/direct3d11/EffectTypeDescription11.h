/*
* Copyright (c) 2007-2010 SlimDX Group
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

#include "Enums11.h"
#include "../direct3d10/Enums.h"

namespace SlimDX
{
	namespace Direct3D11
	{	
		public value class EffectTypeDescription : System::IEquatable<EffectTypeDescription>
		{
		private:
			System::String^ m_TypeName;
			SlimDX::Direct3D10::ShaderVariableClass m_Class;
			SlimDX::Direct3D10::ShaderVariableType m_Type;
			int m_Elements;
			int m_Members;
			int m_Rows;
			int m_Columns;
			int m_PackedSize;
			int m_UnpackedSize;
			int m_Stride;

		internal:
			EffectTypeDescription( const D3DX11_EFFECT_TYPE_DESC& native );
			
		public:
			property System::String^ TypeName
			{
				System::String^ get();
			}
			
			property SlimDX::Direct3D10::ShaderVariableClass Class
			{
				SlimDX::Direct3D10::ShaderVariableClass get();
			}
			
			property SlimDX::Direct3D10::ShaderVariableType Type
			{
				SlimDX::Direct3D10::ShaderVariableType get();
			}
			
			property int Elements
			{
				int get();
			}
			
			property int Members
			{
				int get();
			}
			
			property int Rows
			{
				int get();
			}
			
			property int Columns
			{
				int get();
			}
			
			property int PackedSize
			{
				int get();
			}
			
			property int UnpackedSize
			{
				int get();
			}
			
			property int Stride
			{
				int get();
			}

			static bool operator == ( EffectTypeDescription left, EffectTypeDescription right );
			static bool operator != ( EffectTypeDescription left, EffectTypeDescription right );

			virtual int GetHashCode() override;
			virtual bool Equals( System::Object^ obj ) override;
			virtual bool Equals( EffectTypeDescription other );
			static bool Equals( EffectTypeDescription% value1, EffectTypeDescription% value2 );
		};
	}
};