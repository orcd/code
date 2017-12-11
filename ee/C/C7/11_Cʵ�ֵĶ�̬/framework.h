#pragma once
#include "CSocketProtocol.h"
#include "CEncDesProtocol.h"

extern void framework(CSocketProtocol *p, char *send_buf, int send_len, char *recv_buf, int *recv_len);
extern void framework_pro(CSocketProtocol *p, CEncDesProtocol *ed, char *send_buf, int send_len, char *recv_buf, int *recv_len);