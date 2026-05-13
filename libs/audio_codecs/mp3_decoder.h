#ifndef MP3_DECODER_H
#define MP3_DECODER_H
#include <stdint.h>
int mp3_decode(const uint8_t *in, int in_len, int16_t *out, int out_max);
#endif