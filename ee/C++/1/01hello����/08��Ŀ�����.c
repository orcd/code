#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test()
{
	int a = 10;
	int b = 20;

	printf("%d\n",a>b?a:b);

	//�Ⱥŵ��������ֵ���ұ�����ֵ
	//��ֵ�����ܸı䣬�ǿ��Ը�ֵ������
	//10 = 20;

	//C���Ե���Ŀ��������ص�����ֵ
	//(a > b ? a : b) = 20;//������Ϊ���ص�����ֵ


}

int main2()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

