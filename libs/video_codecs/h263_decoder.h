#ifndef H263_DECODER_H
#define H263_DECODER_H
#include <stdint.h>
int h263_decode_frame(const uint8_t *in, int in_len, uint8_t *out_rgb, int w, int h);
#endif