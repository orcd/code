#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int my_add(int x, int y)
{
	printf("my_add, x = %d, y = %d\n", x, y);
	return x + y;
}

void test(int a, int b)
{
	printf("test�����ڲ�\n");
	//my_add�����ȴ��ڣ����ܵ���
	printf("result = %d\n", my_add(a, b));
}

int main(void)
{
	test(10, 20);


	printf("\n");
	system("pause");
	return 0;
}
