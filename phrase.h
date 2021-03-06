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

#ifndef LSDJ_PHRASE_H
#define LSDJ_PHRASE_H

#include "command.h"

// The default constant lenght of a phrase
#define LSDJ_PHRASE_LENGTH (16)

typedef struct
{
    // The notes in the phrase
    unsigned char notes[LSDJ_PHRASE_LENGTH];
    
    // The instruments the phrase uses for each row
    unsigned char instruments[LSDJ_PHRASE_LENGTH];
    
    // The effect command column for a phrase
    lsdj_command_t commands[LSDJ_PHRASE_LENGTH];
} lsdj_phrase_t;

// Copy a phrase
lsdj_phrase_t* lsdj_phrase_copy(const lsdj_phrase_t* phrase);
    
// Clear all phrase data to factory settings
void lsdj_phrase_clear(lsdj_phrase_t* phrase);

#endif
