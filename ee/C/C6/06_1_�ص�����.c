#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int my_add(int x, int y)
{
	printf("my_add, x = %d, y = %d\n", x, y);
	return x + y;
}

int my_min(int x, int y)
{
	printf("my_min, x = %d, y = %d\n", x, y);
	return x - y;
}

void test01(int a, int b, int(*p)(int, int))
{
	printf("test�����ڲ�\n");
	//pֻ��һ��ָ��������������������
	printf("result = %d\n", p(a, b)); //����ʹ�ú�����д�Ĵ���
}

typedef int(*PARRAY)(int, int); //PARRAYΪ����ָ������
void test(int a, int b, PARRAY p)
{
	printf("test�����ڲ�\n");
	//pֻ��һ��ָ��������������������
	printf("result = %d\n", p(a, b)); //����ʹ�ú�����д�Ĵ���
}

int main(void)
{
	test(10, 20, my_min);

	printf("\n");
	system("pause");
	return 0;
}
