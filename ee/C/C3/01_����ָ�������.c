#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func01(char *p)
{
	p = (char *)malloc(100);
}

void func(char ** p/*out*/)//д
{
	char * tmp = (char *)malloc(100);
	*p = tmp;
}

void test(int *p /*out*/) //д
{
	*p = 111;
}

int main(void)
{
	char *p = NULL;
	int a;

	//func(p); 
	func(&p); //�β���Ϊ������ڱ�����������ռ�
	test(&a);

	strcpy(p, "hello mike");
	printf("p = %s\n", p);


	printf("\n");
	system("pause");
	return 0;
}
