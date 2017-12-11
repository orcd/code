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
	printf("test函数内部\n");
	//p只是一个指针变量，这个函数不存在
	printf("result = %d\n", p(a, b)); //可以使用后来人写的代码
}

typedef int(*PARRAY)(int, int); //PARRAY为函数指针类型
void test(int a, int b, PARRAY p)
{
	printf("test函数内部\n");
	//p只是一个指针变量，这个函数不存在
	printf("result = %d\n", p(a, b)); //可以使用后来人写的代码
}

int main(void)
{
	test(10, 20, my_min);

	printf("\n");
	system("pause");
	return 0;
}
