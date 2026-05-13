#ifndef SYNTH_H
#define SYNTH_H
#include <stdint.h>
void synth_sine(int16_t *buf, int count, int freq, int sample_rate);
#endif