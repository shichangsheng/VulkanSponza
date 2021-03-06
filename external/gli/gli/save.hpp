///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Image (gli.g-truc.net)
///
/// Copyright (c) 2008 - 2015 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
///
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
///
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref core
/// @file gli/save.hpp
/// @date 2015-08-09 / 2015-08-09
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "save_dds.hpp"
#include "save_ktx.hpp"

namespace gli
{
	/// Save a texture storage to file.
	/// 
	/// @param Path Path for where to save the file. It must include the filaname and filename extension.
	/// The function use the filename extension included in the path to figure out the file container to use.
	/// @return Returns false if the function fails to save the file.
	bool save(texture const & Texture, char const * Path);

	/// Save a texture storage to file.
	/// 
	/// @param Path Path for where to save the file. It must include the filaname and filename extension.
	/// The function use the filename extension included in the path to figure out the file container to use.
	/// @return Returns false if the function fails to save the file.
	bool save(texture const & Texture, std::string const & Path);
}//namespace gli

#include "./core/save.inl"
