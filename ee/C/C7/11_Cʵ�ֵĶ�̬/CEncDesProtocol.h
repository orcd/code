#pragma once

//函数指针类型
typedef int(*PENC)(unsigned char *src, int  src_len, unsigned char *dst, int   *dst_len); //加密
typedef int(*PDES)(unsigned char *src, int  src_len, unsigned char *dst, int   *dst_len); //加密

typedef struct CEncDesProtocol
{
	PENC enc; //函数指针变量
	PDES des;
}CEncDesProtocol;

extern void seted(CEncDesProtocol *p, PENC enc, PDES des);