/*
 
 This file is a part of liblsdj, a C library for managing everything
 that has to do with LSDJ, software for writing music (chiptune) with
 your gameboy. For more information, see:
 
 * https://github.com/stijnfrishert/liblsdj
 * http://www.littlesounddj.com
 
 --------------------------------------------------------------------------------
 
 MIT License
 
 Copyright (c) 2018 Stijn Frishert
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 
 */

#ifndef LSDJ_INSTRUMENT_KIT_H
#define LSDJ_INSTRUMENT_KIT_H

#include "instrument_constants.h"

typedef unsigned char lsdj_kit_loop_mode;
static const lsdj_kit_loop_mode LSDJ_KIT_LOOP_OFF = 0;
static const lsdj_kit_loop_mode LSDJ_KIT_LOOP_ON = 1;
static const lsdj_kit_loop_mode LSDJ_KIT_LOOP_ATTACK = 2;

typedef unsigned char lsdj_kit_distortion;
static const lsdj_kit_distortion LSDJ_KIT_DIST_CLIP = 0xD0;
static const lsdj_kit_distortion LSDJ_KIT_DIST_SHAPE = 0xD1;
static const lsdj_kit_distortion LSDJ_KIT_DIST_SHAPE2 = 0xD2;
static const lsdj_kit_distortion LSDJ_KIT_DIST_WRAP = 0xD3;

typedef unsigned char lsdj_kit_pspeed;
static const lsdj_kit_pspeed LSDJ_KIT_PSPEED_FAST = 0;
static const lsdj_kit_pspeed LSDJ_KIT_PSPEED_SLOW = 1;
static const lsdj_kit_pspeed LSDJ_KIT_PSPEED_STEP = 2;

typedef struct
{
    unsigned char kit1;
    unsigned char offset1;
    unsigned char length1;
    lsdj_kit_loop_mode loop1;
    
    unsigned char kit2;
    unsigned char offset2;
    unsigned char length2;
    lsdj_kit_loop_mode loop2;
    
    unsigned char pitch;
    unsigned char halfSpeed;
    lsdj_kit_distortion distortion;
    lsdj_plvib_speed plvibSpeed;
    lsdj_vib_shape vibShape;
    lsdj_vib_direction vibratoDirection;
} lsdj_instrument_kit_t;

#endif
