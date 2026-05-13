#ifndef AUDIO_H
#define AUDIO_H
void audio_init(void);
void audio_play_beep(int freq, int ms);
void audio_play_file(const char *path);
#endif