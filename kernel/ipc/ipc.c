#include "ipc.h"
static msg_queue_t queues[MAX_QUEUES];
static int qcount=0;
void ipc_init(void) { qcount=0; }
int ipc_queue_create(void) { if(qcount>=MAX_QUEUES) return -1; queues[qcount].head=0; queues[qcount].tail=0; queues[qcount].count=0; qcount++; return qcount-1; }
int ipc_send(int qid, void *msg, int size) { (void)qid; (void)msg; (void)size; return 0; }
int ipc_recv(int qid, void *msg, int size) { (void)qid; (void)msg; (void)size; return 0; }