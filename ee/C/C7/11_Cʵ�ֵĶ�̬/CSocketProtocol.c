#include "CSocketProtocol.h"

void setsp(CSocketProtocol *p, PINIT init, PSEND send, PRECV recv, PDESTROY destroy)
{
	p->init = init;
	p->send = send;
	p->recv = recv;
	p->destroy = destroy;
}