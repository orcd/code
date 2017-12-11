#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "framework.h"
#include "test.h"
#include "des.h"

int main(void)
{
	CSocketProtocol sp; //通信
	setsp(&sp, get_mem, set_buf, get_buf, free_mem); //给sp成员赋值

	CEncDesProtocol ed; //加解密
	seted(&ed, DesEnc, DesDec);

	char buf[1024] = { 0 };
	int len;
	framework_pro(&sp, &ed, "hello mike", strlen("hello mike"), buf, &len);
	printf("buf = %s, len = %d\n", buf, len);

	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	CSocketProtocol sp;
	setsp(&sp, get_mem, set_buf, get_buf, free_mem); //给sp成员赋值

	char buf[1024] = { 0 };
	int len;
	framework(&sp, "hello mike", strlen("hello mike"), buf, &len);
	printf("buf = %s, len = %d\n", buf, len);

	printf("\n");
	system("pause");
	return 0;
}
