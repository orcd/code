#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a; //����һ������a�� ����Ϊint
	int * p; //����һ������p, ����Ϊint *�������Ϳ��Ա�������
	p = &a; //����ĳ�������ĵ�ַ

	*p = 111; //*p���ǲ���p���ڴ棬��������p��ָ����ڴ棬����a
	printf("*p = %d, a = %d\n", *p, a);


	printf("\n");
	system("pause");
	return 0;
}
