#include "battery_monitor.h"
#include "battery.h"
#include "task.h"
#include "ipc.h"
static int batt_percent = 100;
static int batt_queue = -1;
void battery_monitor_task(void *arg) {
    (void)arg;
    batt_queue = ipc_queue_create();
    while(1) {
        batt_percent = battery_get_percent();
        if(batt_percent < 10) {
            int msg = batt_percent;
            ipc_send(batt_queue, &msg, sizeof(msg));
        }
        task_yield();
    }
}
int battery_get_monitor_queue(void) { return batt_queue; }