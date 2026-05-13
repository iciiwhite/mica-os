#ifndef WAV_DECODER_H
#define WAV_DECODER_H
#include <stdint.h>
int wav_decode(const uint8_t *in, int in_len, int16_t *out, int *out_samples);
#endif