#ifndef JPEG_ENCODER_H
#define JPEG_ENCODER_H
#include <stdint.h>
int jpeg_encode(const uint8_t *rgb, int width, int height, uint8_t *out, uint32_t *out_len);
#endif