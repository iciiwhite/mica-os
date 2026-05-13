#include "dialer.h"
#include "window.h"
#include "keypad_driver.h"
#include "audio.h"
void dialer_run(void) {
    int win = window_create("Dialer", 0,0,200,200);
    char number[16]="";
    int pos=0;
    while(1) {
        eink_clear();
        eink_draw_string(number, 10,30,0);
        window_draw(win);
        uint16_t key = keypad_get_key();
        if(key & 1) { number[pos++]='1'; number[pos]=0; audio_play_beep(697,100); }
        else if(key & 2) { number[pos++]='2'; number[pos]=0; audio_play_beep(697,100); }
        else if(key & 4) { number[pos++]='3'; number[pos]=0; audio_play_beep(697,100); }
        else if(key & 8) { number[pos++]='4'; number[pos]=0; audio_play_beep(770,100); }
        else if(key & 16) { number[pos++]='5'; number[pos]=0; audio_play_beep(770,100); }
        else if(key & 32) { number[pos++]='6'; number[pos]=0; audio_play_beep(770,100); }
        else if(key & 64) { number[pos++]='7'; number[pos]=0; audio_play_beep(852,100); }
        else if(key & 128) { number[pos++]='8'; number[pos]=0; audio_play_beep(852,100); }
        else if(key & 256) { number[pos++]='9'; number[pos]=0; audio_play_beep(852,100); }
        else if(key & 512) { number[pos++]='0'; number[pos]=0; audio_play_beep(941,100); }
        else if(key & 1024) { if(pos>0) pos--; number[pos]=0; }
        else if(key & 2048) { break; }
    }
}