#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1���˷�����
	int a = 10 * 2;

	//2���������ʱ��*����һ�����ͣ������ͽ��
	//����һ������p, ����Ϊint *, p��ʼ��Ϊ&a
	int *p = &a;
	/*
	int *p;
	p = &a;

	int *p;
	*p = &a;
	*/

	//3��ʹ�ñ���ʱ��*p����ָ����ָ����ڴ�
	*p = 111; //�ȼ���a = 111, ����*p, д

	//����һ���ڴ棬�����Ƕ���Ҳ������д
	int b = *p; //����*p, ��



	printf("\n");
	system("pause");
	return 0;
}
