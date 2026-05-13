#include "synth.h"
#include <math.h>
void synth_sine(int16_t *buf, int count, int freq, int sample_rate) {
    static float phase=0;
    float inc = 2*3.14159*freq/sample_rate;
    for(int i=0;i<count;i++) { buf[i]=32767*sin(phase); phase+=inc; if(phase>2*3.14159) phase-=2*3.14159; }
}