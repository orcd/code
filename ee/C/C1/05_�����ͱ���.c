#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//变量：运行期间可以改变的量
	//常量：运行期间不能改变的量，数组名，宏定义，字符串常量，const修饰的变量，函数名

	int i = 0;
	i = 10;
	//i代表内存
	//i++它是表达式，就是一个结果，而不是内存
	//i++ = 10;

	int a = 10;
	int b = 20;
	//a + b = 30;


	printf("\n");
	system("pause");
	return 0;
}
