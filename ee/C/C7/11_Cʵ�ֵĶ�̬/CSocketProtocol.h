#pragma once

//通信模块抽象接口: 初始化， 发送， 接收，释放
//函数指针类型
typedef void(*PINIT)(void **p);
typedef void(*PSEND)(void *p, char *buf, int len);
typedef void(*PRECV)(void *p, char *buf, int *len);
typedef void(*PDESTROY)(void *p);

//类型声明
typedef struct CSocketProtocol
{
	//函数指针变量
	PINIT init;
	PSEND send;
	PRECV recv;
	PDESTROY destroy;
}CSocketProtocol;

//函数声明，给CSocketProtocol成员赋值
extern void setsp(CSocketProtocol *p, PINIT init, PSEND send, PRECV recv, PDESTROY destroy);