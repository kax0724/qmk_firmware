// This is the 'classic' fixed-space bitmap font for Adafruit_GFX since 1.0.
// See gfxfont.h for newer custom bitmap font info.

#include "progmem.h"

// Standard ASCII 5x7 font
const unsigned char font[] PROGMEM = {
    0x7f, 0x7f, 0x7f, 0xbf, 0x83, 0x03, 0x03, 0x07, 0x1f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0xff, 0x07, 0x01, 
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0xeb, 0xef, 0xef, 0xff, 0x3f, 0xff, 0xff, 0xff, 
    0xf0, 0xf9, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfc, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xe6, 0x00, 
    0x00, 0x03, 0x7d, 0x78, 0x00, 0x00, 0x00, 0xe7, 0xff, 0x7f, 0x1f, 0xf1, 0xfe, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9e, 0xc0, 0x00, 0x00, 0x03, 0x01, 0x01, 0x00, 
    0x00, 0x00, 0xd0, 0x10, 0x00, 0x20, 0x00, 0x7f, 0x7f, 0x00, 0x01, 0x07, 0x3f, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
    0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x40, 0x08, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x00, 0x04, 0x09, 0x22, 0x0c, 0x10, 0x00, 
    0x00, 0x00, 0x00, 0x67, 0x7e, 0x00, 0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x40, 0xf0, 0xf8, 0xfa, 0xe0, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x03, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 
    0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 0x1f, 0x7f, 0xff, 
    0xcf, 0x9f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x0f, 0x3f, 0x3f, 0x8f, 0x07, 
    0x00, 0xf0, 0x40, 0x00, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0x0b, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9d, 0x9d, 
    0xff, 0xf1, 0xfc, 0xfe, 0xfe, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xff, 0xff, 0xff, 0xbf, 0x07, 0x03, 0x00, 0x80, 0x00, 0xc0, 0x00, 0xc0, 0x80, 0x00, 0x00, 0x3f, 
    0x1f, 0x0f, 0x3b, 0xff, 0xff, 0xff, 0xff, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xf8, 0xf0, 0xf0, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
    0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xfc, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
    0xc0, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xe0, 0xf0, 0xfc, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x0f, 0x00, 0x00, 0x80, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xfc, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
