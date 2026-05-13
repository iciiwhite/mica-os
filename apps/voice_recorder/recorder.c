#include "recorder.h"
#include "audio.h"
#include "file_manager.h"
void recorder_run(void) { audio_init(); int win=window_create("Recorder",0,0,200,200); eink_clear(); eink_draw_string("Press # to record",10,30,0); window_draw(win); while(!(keypad_get_key()&2048)); }