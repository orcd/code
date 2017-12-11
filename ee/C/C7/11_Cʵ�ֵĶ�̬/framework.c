#include "CSocketProtocol.h"
#include "CEncDesProtocol.h"
#include <stdio.h> //NULL

void framework(CSocketProtocol *p, char *send_buf, int send_len, char *recv_buf, int *recv_len)
{
	void *hd;

	//��ʼ��
	p->init(&hd);

	//������Ϣ
	p->send(hd, send_buf, send_len);

	//������Ϣ
	p->recv(hd, recv_buf, recv_len);

	//�ͷ���Դ
	p->destroy(hd);
	hd = NULL;
}

//������Ϣǰ����Ҫ���ܣ�������Ϣ����Ҫ����
void framework_pro(CSocketProtocol *p, CEncDesProtocol *ed, char *send_buf, int send_len, char *recv_buf, int *recv_len)
{
	void *hd;
	unsigned char buf[1024] = { 0 };
	int len = 0;

	//��ʼ��
	p->init(&hd);

	//������Ϣǰ����Ҫ����
	ed->enc((unsigned char *)send_buf, send_len, buf, &len);

	p->send(hd, (char *)buf, len);

	//������Ϣ����Ҫ����
	p->recv(hd, buf, &len);
	ed->des(buf, len, (unsigned char *)recv_buf, recv_len);

	//�ͷ���Դ
	p->destroy(hd);
	hd = NULL;
}