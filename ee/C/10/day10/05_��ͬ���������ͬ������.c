/* ************************************************************************
 *       Filename:  05_不同作用域变量同名问题.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 11时41分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

double a = 10.11;

int main()
{
	int a = 22;

	{
		char a = 97;
		printf("%lu\n", sizeof(a)); //char a
	}

	printf("%lu\n", sizeof(a)); //int a

	extern void test(); //函数声明
	test();

	return 0;
}

void test()
{
	printf("%lu\n", sizeof(a)); //double a
}
