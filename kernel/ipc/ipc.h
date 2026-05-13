#ifndef IPC_H
#define IPC_H
#define MAX_QUEUES 16
#define MAX_MSG_SIZE 256
typedef struct { int head; int tail; int count; char buffer[MAX_MSG_SIZE*MAX_QUEUES]; } msg_queue_t;
void ipc_init(void);
int ipc_queue_create(void);
int ipc_send(int qid, void *msg, int size);
int ipc_recv(int qid, void *msg, int size);
#endif