#ifndef OGG_DECODER_H
#define OGG_DECODER_H
#include <stdint.h>
int ogg_decode(const uint8_t *in, int in_len, int16_t *out, int max_out);
#endif