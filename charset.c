#include <avr/pgmspace.h>

PROGMEM const unsigned char zx81chars[] = {
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xf0,0xf0,0xf0,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xf0,0xf0,0xf0,0xf0,
0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf,0xf,0xf,0xf,0xff,0xff,
0xff,0xff,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xf,0xf,0xf,
0xf,0xf0,0xf0,0xf0,0xf0,0x0,0x0,0x0,0x0,0xf0,0xf0,0xf0,0xf0,
0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaf,0x5f,0xaf,0x5f,0xaf,
0x5f,0xaf,0x5f,0xfa,0xf5,0xfa,0xf5,0xfa,0xf5,0xfa,0xf5,0xff,0xff,
0xf9,0xff,0xff,0xf9,0xff,0xff,0xff,0xb7,0x83,0xb5,0xb5,0xbd,0xbb,
0xff,0xff,0xff,0xa3,0xab,0x1,0xab,0x8b,0xff,0xff,0xff,0xff,0xb7,
0xff,0xff,0xff,0xff,0xff,0xfb,0xfd,0xfd,0xad,0xf5,0xfb,0xff,0xff,
0xff,0xff,0xff,0xc3,0xbd,0xff,0xff,0xff,0xff,0xbd,0xc3,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xbb,0xd7,0xef,0xff,0xff,0xff,0xff,0xff,
0xef,0xd7,0xbb,0xff,0xff,0xff,0xff,0xd7,0xd7,0xd7,0xd7,0xd7,0xff,
0xff,0xff,0xef,0xef,0x83,0xef,0xef,0xff,0xff,0xff,0xef,0xef,0xef,
0xef,0xef,0xff,0xff,0xff,0xef,0xab,0xc7,0xab,0xef,0xff,0xff,0xff,
0xbf,0xdf,0xef,0xf7,0xfb,0xff,0xff,0xff,0x7f,0x9b,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x7f,0x9f,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,
0x9f,0xff,0xff,0xff,0xff,0xc3,0x9d,0xad,0xb5,0xb9,0xc3,0xff,0xff,
0xff,0xbb,0xbd,0x81,0xbf,0xbf,0xff,0xff,0x9b,0xad,0xad,0xad,0xad,
0xb3,0xff,0xff,0xdb,0xbd,0xbd,0xb5,0xb5,0xcb,0xff,0xff,0xcf,0xd7,
0xdb,0x81,0xdf,0xdf,0xff,0xff,0xd1,0xb5,0xb5,0xb5,0xb5,0xcd,0xff,
0xff,0xc3,0xb5,0xb5,0xb5,0xb5,0xcf,0xff,0xff,0xfd,0xfd,0x9d,0xed,
0xf5,0xf9,0xff,0xff,0xcb,0xb5,0xb5,0xb5,0xb5,0xcb,0xff,0xff,0xf3,
0xad,0xad,0xad,0xad,0xc3,0xff,0xff,0x83,0xed,0xed,0xed,0xed,0x83,
0xff,0xff,0x81,0xb5,0xb5,0xb5,0xb5,0xcb,0xff,0xff,0xc3,0xbd,0xbd,
0xbd,0xbd,0xdb,0xff,0xff,0x81,0xbd,0xbd,0xbd,0xdb,0xe7,0xff,0xff,
0x81,0xb5,0xb5,0xb5,0xb5,0xbd,0xff,0xff,0x81,0xf5,0xf5,0xf5,0xf5,
0xfd,0xff,0xff,0xc3,0xbd,0xbd,0xad,0xad,0xcb,0xff,0xff,0x81,0xf7,
0xf7,0xf7,0xf7,0x81,0xff,0xff,0xff,0xbd,0xbd,0x81,0xbd,0xbd,0xff,
0xff,0xcf,0xbf,0xbf,0xbf,0xbf,0xc1,0xff,0xff,0x81,0xf7,0xf7,0xeb,
0xdd,0xbf,0xff,0xff,0x81,0xbf,0xbf,0xbf,0xbf,0xbf,0xff,0xff,0x81,
0xfb,0xf7,0xf7,0xfb,0x81,0xff,0xff,0x81,0xfb,0xf7,0xef,0xdf,0x81,
0xff,0xff,0xc3,0xbd,0xbd,0xbd,0xbd,0xc3,0xff,0xff,0x81,0xed,0xed,
0xed,0xed,0xf3,0xff,0xff,0xc3,0xbd,0xad,0x9d,0xbd,0xc3,0xff,0xff,
0x81,0xed,0xed,0xed,0xcd,0xb3,0xff,0xff,0xdb,0xb5,0xb5,0xb5,0xb5,
0xcf,0xff,0xfd,0xfd,0xfd,0x81,0xfd,0xfd,0xfd,0xff,0xff,0xc1,0xbf,
0xbf,0xbf,0xbf,0xc1,0xff,0xff,0xe1,0xdf,0xbf,0xbf,0xdf,0xe1,0xff,
0xff,0xc1,0xbf,0xdf,0xdf,0xbf,0xc1,0xff,0xff,0xbd,0xdb,0xe7,0xe7,
0xdb,0xbd,0xff,0xfd,0xfb,0xf7,0x8f,0xf7,0xfb,0xfd,0xff,0xff,0xbd,
0x9d,0xad,0xb5,0xb9,0xbd,0xff,0x0,0x0,0x18,0xa,0xa,0x0,0xe,
0xf,0xf0,0xf0,0xf0,0xe0,0xe0,0xe0,0xc1,0xc1,0xf0,0xf0,0xf1,0xf1,
0xe1,0xe1,0xc0,0xc0,0xe0,0xf1,0xe0,0xe1,0xf1,0xe1,0xd0,0xe0,0x1,
0x0,0x0,0x10,0x1,0x10,0x0,0x0,0x0,0x60,0x20,0x60,0x20,0x0,
0x60,0x10,0x0,0x2,0x2,0x12,0x36,0xe2,0x10,0x19,0x1,0x0,0x0,
0x10,0x11,0x10,0x0,0x2,0xf0,0xe0,0xe0,0xf1,0xf1,0xf1,0xc0,0xc0,
0x0,0x20,0x0,0x0,0xc0,0x41,0x40,0x21,0x42,0x61,0x0,0x0,0x88,
0xda,0x5,0x7a,0x0,0x0,0x10,0x0,0x10,0x3,0x0,0x0,0xf0,0xe0,
0xe1,0xe1,0xf1,0xf1,0xc0,0xc0,0x0,0x21,0x0,0x1,0xc1,0x40,0x41,
0x20,0x42,0x21,0x0,0x0,0x8,0x9a,0x65,0xfa,0x45,0xe0,0x0,0x20,
0x0,0x7,0x5d,0xcc,0x15,0x1f,0x0,0x0,0x20,0xf5,0x5,0x1e,0x0,
0x10,0x10,0x1,0x10,0x0,0x0,0x0,0xf,0xe,0xf,0xf,0xf,0x1e,
0xd,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf,0xf,0xf,
0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x11,0x0,0x0,0x1,0x0,0x1,0x1,0x1,0x10,0x0,0x1,
0x0,0x0,0x1,0x0,0x0,0x11,0x0,0x1,0x0,0x1,0x0,0x1,0x0,
0x11,0x0,0x1,0x1,0x0,0x10,0x11,0x1,0x0,0x2,0x0,0x0,0x0,
0x18,0x17,0x0,0x10,0x73,0xf0,0xf0,0x71,0xe9,0xf7,0xe2,0xd2,0x3,
0x0,0x0,0x0,0x9,0x15,0x0,0x12,0x3,0x0,0x1,0x0,0x9,0x14,
0x12,0x0,0x3,0x1,0x0,0x0,0x19,0x4,0x10,0x2,0x1,0x1,0x0,
0x1,0x11,0x0,0x10,0x10,0x0,0x0,0x0,0x11,0x0,0x10,0x0,0x10,
0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x10,0x3,0x1,0x0,0x2,0xa,
0x4,0x12,0x2,0x0,0x0,0x1,0x11,0x0,0x10,0x0,0x0,0x0,0x0,
0x0,0x11,0x0,0x10,0x10,0x11,0x3,0x1,0x0,0x11,0x8,0x5,0x2,
0x12,0x3,0x1,0x0,0x10,0x9,0x5,0x12,0x2,0x0,0x0,0x0,0x10,
0x1,0x0,0x10,0x10,0x70,0xf0,0xf0,0x70,0xf1,0xf0,0xf0,0xe0,0x73,
0xf0,0xf0,0x71,0xf9,0xf5,0xf2,0xf2,0x70,0xf0,0xf0,0x70,0xe0,0xe0,
0xe0,0xe1,0x3,0x0,0x0,0x0,0x8,0x4,0x2,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x1,0x0,0x3,0xa,0x5,0x2,
0x0,0x20,0x10,0x0,0x0,0x90,0x60,0x10,0x0,0x22,0x11,0x10,0x1,
0x99,0x66,0x11,0x0,0x32,0x1,0x1,0x1,0x99,0x66,0x11,0x0,0x3,
0x0,0x0,0x1,0x9,0x6,0x1,0x0,0x0,0x8e,0x70,0x10,0x50,0x82,
0x9e,0x8e,0x0,0x3,0xfc,0x52,0xa5,0xf3,0xa1,0x6,0x0,0x0,0xff,
0xfd,0x0,0x81,0x84,0x10,0x0,0x70,0xef,0x13,0x8,0x60,0x11,0x21,
0x0,0x7,0xfe,0x54,0xa1,0xf4,0xa0,0x2,0x0,0x80,0x1f,0xd,0x12,
0x83,0x80,0x96,0x0,0xe3,0x1c,0x84,0x54,0xe0,0x67,0xa3
};
