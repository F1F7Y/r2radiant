/* -------------------------------------------------------------------------------

   Copyright (C) 2022-2023 MRVN-Radiant and contributors.
   For a list of contributors, see the accompanying CONTRIBUTORS file.

   This file is part of MRVN-Radiant.

   MRVN-Radiant is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   MRVN-Radiant is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GtkRadiant; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

   ------------------------------------------------------------------------------- */

#pragma once

#include "../titanfall/titanfall.h"
#include "qmath.h"
#include <cstdint>
#include "../remap.h"
#include "../lump_names.h"


void WriteR2EntFiles(const char* filename);

void LoadR2BSPFile( rbspHeader_t *header, const char *filename );
void WriteR2BSPFile(const char* filename);
void CompileR2BSPFile();


/* -------------------------------------------------------------------------------

   abstracted bsp globals

   ------------------------------------------------------------------------------- */


namespace Titanfall2 {
    void EmitEntity(const entity_t &e);
    void EmitStubs();

    namespace Bsp {
        /* Stubs */
        inline std::vector<uint8_t>  worldLights_stub;
        inline std::vector<uint8_t>  lightMapHeaders_stub;
        inline std::vector<uint8_t>  lightMapDataSky_stub;
    }
}