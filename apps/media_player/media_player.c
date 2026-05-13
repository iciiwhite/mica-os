#include "media_player.h"
#include "window.h"
#include "audio.h"
#include "sdcard.h"
void media_player_play(const char *path) { audio_play_file(path); }
void media_player_run(void) {
    int win=window_create("Media",0,0,200,200);
    eink_clear();
    eink_draw_string("Playing music...",10,30,0);
    window_draw(win);
    while(!(keypad_get_key() & 2048));
}