#pragma once

//����ָ������
typedef int(*PENC)(unsigned char *src, int  src_len, unsigned char *dst, int   *dst_len); //����
typedef int(*PDES)(unsigned char *src, int  src_len, unsigned char *dst, int   *dst_len); //����

typedef struct CEncDesProtocol
{
	PENC enc; //����ָ�����
	PDES des;
}CEncDesProtocol;

extern void seted(CEncDesProtocol *p, PENC enc, PDES des);