#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "test.h"

int main(void)
{
	void * p;

	//1��ͨ��һ��������p��̬����ռ�
	get_mem(&p);

	//2����buf�������ݣ������ķ�ʽ
	char str[] = "hello abc";
	int len = strlen(str);
	set_buf(p, str, len);

	//3��ȡ�ṹ����buf������
	char tmp[100] = { 0 };
	get_buf(p, tmp, &len);
	printf("tmp = %s, len = %d\n", tmp, len);

	//4���ͷŶ����Ŀռ�
	free_mem(p);
	p = NULL;


	printf("\n");
	system("pause");
	return 0;
}
