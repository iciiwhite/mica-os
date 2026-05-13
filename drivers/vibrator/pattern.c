#include "pattern.h"
#include "vibrator.h"
#include "timer.h"
void vibrator_pattern(const int *ms_on, const int *ms_off, int count) {
    for(int i=0;i<count;i++) {
        vibrator_on();
        timer_delay_ms(ms_on[i]);
        vibrator_off();
        if(ms_off[i]) timer_delay_ms(ms_off[i]);
    }
}