/* FluidSynth - A Software Synthesizer
 *
 * Copyright (C) 2003  Peter Hanappe and others.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 */

#ifndef _FLUID_MOD_H
#define _FLUID_MOD_H

#include "fluidsynth_priv.h"
#include "fluid_conv.h"

void fluid_mod_clone(fluid_mod_t* mod, fluid_mod_t* src);
fluid_real_t fluid_mod_get_value(fluid_mod_t* mod, fluid_channel_t* chan, fluid_voice_t* voice);
void fluid_dump_modulator(fluid_mod_t * mod);

#define fluid_mod_has_source(mod,cc,ctrl)  \
( ((((mod)->src1 == ctrl) && (((mod)->flags1 & FLUID_MOD_CC) != 0) && (cc != 0)) \
   || ((((mod)->src1 == ctrl) && (((mod)->flags1 & FLUID_MOD_CC) == 0) && (cc == 0)))) \
|| ((((mod)->src2 == ctrl) && (((mod)->flags2 & FLUID_MOD_CC) != 0) && (cc != 0)) \
    || ((((mod)->src2 == ctrl) && (((mod)->flags2 & FLUID_MOD_CC) == 0) && (cc == 0)))))

#define fluid_mod_has_dest(mod,gen)  ((mod)->dest == gen)


#endif /* _FLUID_MOD_H */
