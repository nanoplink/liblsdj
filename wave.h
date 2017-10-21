#ifndef LSDJ_WAVE_H
#define LSDJ_WAVE_H

#include "command.h"

#ifdef __cplusplus
extern "C" {
#endif
    
static const unsigned int WAVE_LENGTH = 16;
static const unsigned char DEFAULT_WAVE[WAVE_LENGTH] = { 0x8E, 0xCD, 0xCC, 0xBB, 0xAA, 0xA9, 0x99, 0x88, 0x87, 0x76, 0x66, 0x55, 0x54, 0x43, 0x32, 0x31 };
    
typedef struct
{
    unsigned char data[WAVE_LENGTH];
} lsdj_wave_t;
    
void lsdj_clear_wave(lsdj_wave_t* wave);
    
#ifdef __cplusplus
}
#endif

#endif
