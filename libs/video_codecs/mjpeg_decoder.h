#ifndef MJPEG_DECODER_H
#define MJPEG_DECODER_H
#include <stdint.h>
int mjpeg_decode_frame(const uint8_t *in, int in_len, uint8_t *out_rgb, int *w, int *h);
#endif