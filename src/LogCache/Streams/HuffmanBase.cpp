// TortoiseSVN - a Windows shell extension for easy version control

// Copyright (C) 2007-2009 - TortoiseSVN

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//

#include "stdafx.h"
#include "HuffmanBase.h"

///////////////////////////////////////////////////////////////
// utility function that reverses the bit order of a given key
///////////////////////////////////////////////////////////////

CHuffmanBase::key_type CHuffmanBase::ReverseBits (key_type v, BYTE length)
{
    key_type result = 0;
    for (; length > 0; --length)
    {
        result = 2*result + (v & 1);
        v >>= 1;
    }

    return result;
}
