#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * func()
{
	//栈区数组
	//函数调用完毕，自动释放，用户不应该再使用此空间
	char p[] = "hello abc";

	return p; //return &p[0] 
}

int main(void)
{
	char * tmp;
	tmp = func();
	printf("%s\n", tmp); //读, 乱码

	//strcpy(tmp, "abc"); //给指针所指向内存拷贝内容，不是给tmp拷贝内容， err


	printf("\n");
	system("pause");
	return 0;
}
