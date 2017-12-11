#pragma once

//ͨ��ģ�����ӿ�: ��ʼ���� ���ͣ� ���գ��ͷ�
//����ָ������
typedef void(*PINIT)(void **p);
typedef void(*PSEND)(void *p, char *buf, int len);
typedef void(*PRECV)(void *p, char *buf, int *len);
typedef void(*PDESTROY)(void *p);

//��������
typedef struct CSocketProtocol
{
	//����ָ�����
	PINIT init;
	PSEND send;
	PRECV recv;
	PDESTROY destroy;
}CSocketProtocol;

//������������CSocketProtocol��Ա��ֵ
extern void setsp(CSocketProtocol *p, PINIT init, PSEND send, PRECV recv, PDESTROY destroy);