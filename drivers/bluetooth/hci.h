#ifndef HCI_H
#define HCI_H
#include <stdint.h>
void hci_init(void);
int hci_send_cmd(uint16_t opcode, uint8_t *data, int len);
#endif