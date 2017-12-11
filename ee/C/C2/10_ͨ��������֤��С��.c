#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a = 0x11223344; //通过调试，窗口->内存， 看到，低位放低地址，小端存放
	printf("&a = %p\n", &a);

	printf("\n");
	system("pause");
	return 0;
}
