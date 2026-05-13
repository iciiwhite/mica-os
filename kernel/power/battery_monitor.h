#ifndef BATTERY_MONITOR_H
#define BATTERY_MONITOR_H
void battery_monitor_task(void *arg);
int battery_get_monitor_queue(void);
#endif