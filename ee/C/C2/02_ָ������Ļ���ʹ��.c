#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a; //定义一个变量a， 类型为int
	int * p; //定义一个变量p, 类型为int *，变量就可以保存数据
	p = &a; //保存某个变量的地址

	*p = 111; //*p不是操作p的内存，操作的是p所指向的内存，就是a
	printf("*p = %d, a = %d\n", *p, a);


	printf("\n");
	system("pause");
	return 0;
}
