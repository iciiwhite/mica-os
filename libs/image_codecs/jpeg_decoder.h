#ifndef JPEG_DECODER_H
#define JPEG_DECODER_H
#include <stdint.h>
int jpeg_decode(const uint8_t *in, int in_len, uint8_t *out_rgb, int *w, int *h);
#endif