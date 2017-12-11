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
	printf("test函数内部\n");
	//my_add必须先存在，才能调用
	printf("result = %d\n", my_add(a, b));
}

int main(void)
{
	test(10, 20);


	printf("\n");
	system("pause");
	return 0;
}
