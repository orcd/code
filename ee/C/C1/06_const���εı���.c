#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//const int a = 10; //err

int main(void)
{
	//1��const������ͨ�ֲ�������ֻ���������ٵĳ�������ͨ��ָ�����޸�
	//2��const����ȫ�ֱ����� static�������������ĳ���

	//static const int a = 10; //err
	const int a = 10; //ok
	int *p = &a;
	*p = 111;
	printf("a = %d\n", a);


	printf("\n");
	system("pause");
	return 0;
}
