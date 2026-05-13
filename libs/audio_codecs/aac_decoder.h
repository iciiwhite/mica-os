#ifndef AAC_DECODER_H
#define AAC_DECODER_H
#include <stdint.h>
int aac_decode_frame(const uint8_t *in, int in_len, int16_t *pcm, int max_pcm);
#endif