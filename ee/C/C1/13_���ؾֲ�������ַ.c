#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * func()
{
	//ջ������
	//����������ϣ��Զ��ͷţ��û���Ӧ����ʹ�ô˿ռ�
	char p[] = "hello abc";

	return p; //return &p[0] 
}

int main(void)
{
	char * tmp;
	tmp = func();
	printf("%s\n", tmp); //��, ����

	//strcpy(tmp, "abc"); //��ָ����ָ���ڴ濽�����ݣ����Ǹ�tmp�������ݣ� err


	printf("\n");
	system("pause");
	return 0;
}
