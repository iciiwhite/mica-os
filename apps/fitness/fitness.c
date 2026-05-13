#include "fitness.h"
#include "accelerometer.h"
void fitness_run(void) { accel_init(); int steps=0; while(!(keypad_get_key()&2048)) { steps++; } }