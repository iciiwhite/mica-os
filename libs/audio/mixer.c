#include "mixer.h"
#include <string.h>
static int16_t mix_buffer[1024];
void mixer_init(void) { memset(mix_buffer,0,sizeof(mix_buffer)); }
void mixer_add(int16_t *samples, int count, int volume) { for(int i=0;i<count;i++) mix_buffer[i] += samples[i]*volume/100; }
void mixer_get_buffer(int16_t *out, int count) { memcpy(out,mix_buffer,count*2); memset(mix_buffer,0,count*2); }