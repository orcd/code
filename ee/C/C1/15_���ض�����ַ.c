#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * func()
{
	char *p;
	p = (char *)malloc(100);
	strcpy(p, "hello abc"); //不是给p拷贝内容，给p所指向的内存拷贝内容

	return p;
}

int main(void)
{
	char * tmp;
	tmp = func();
	printf("tmp = %s\n", tmp);

	free(tmp);
	tmp = NULL;

	printf("\n");
	system("pause");
	return 0;
}
