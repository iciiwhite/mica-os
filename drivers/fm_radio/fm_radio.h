#ifndef FM_RADIO_H
#define FM_RADIO_H
void fm_radio_init(void);
void fm_radio_tune(int freq_mhz);
void fm_radio_volume(int level);
void fm_radio_start(void);
void fm_radio_stop(void);
#endif