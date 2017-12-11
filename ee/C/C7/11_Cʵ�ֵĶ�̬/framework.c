#include "CSocketProtocol.h"
#include "CEncDesProtocol.h"
#include <stdio.h> //NULL

void framework(CSocketProtocol *p, char *send_buf, int send_len, char *recv_buf, int *recv_len)
{
	void *hd;

	//初始化
	p->init(&hd);

	//发送信息
	p->send(hd, send_buf, send_len);

	//接收信息
	p->recv(hd, recv_buf, recv_len);

	//释放资源
	p->destroy(hd);
	hd = NULL;
}

//发送信息前，需要加密，接收信息后，需要解密
void framework_pro(CSocketProtocol *p, CEncDesProtocol *ed, char *send_buf, int send_len, char *recv_buf, int *recv_len)
{
	void *hd;
	unsigned char buf[1024] = { 0 };
	int len = 0;

	//初始化
	p->init(&hd);

	//发送信息前，需要加密
	ed->enc((unsigned char *)send_buf, send_len, buf, &len);

	p->send(hd, (char *)buf, len);

	//接收信息后，需要解密
	p->recv(hd, buf, &len);
	ed->des(buf, len, (unsigned char *)recv_buf, recv_len);

	//释放资源
	p->destroy(hd);
	hd = NULL;
}