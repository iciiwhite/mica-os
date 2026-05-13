#ifndef MIXER_H
#define MIXER_H
#include <stdint.h>
void mixer_init(void);
void mixer_add(int16_t *samples, int count, int volume);
void mixer_get_buffer(int16_t *out, int count);
#endif