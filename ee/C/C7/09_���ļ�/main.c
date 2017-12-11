#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "test.h"

int main(void)
{
	void * p;

	//1、通过一个函数给p动态分配空间
	get_mem(&p);

	//2、给buf设置内容，拷贝的方式
	char str[] = "hello abc";
	int len = strlen(str);
	set_buf(p, str, len);

	//3、取结构体中buf的内容
	char tmp[100] = { 0 };
	get_buf(p, tmp, &len);
	printf("tmp = %s, len = %d\n", tmp, len);

	//4、释放堆区的空间
	free_mem(p);
	p = NULL;


	printf("\n");
	system("pause");
	return 0;
}
