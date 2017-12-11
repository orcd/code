/* ************************************************************************
 *       Filename:  test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年10月08日 11时12分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

//1、定义常量，最常用, 无参的宏
#define MAX 100

//2、给一个类型起别名，最好用typedef
#define BOOL int

//3、带参的宏，宏定义的函数, 好处，效率高, 只是替换
#define MUL(a, b) (a)*(b)

int my_mul(int a, int b)
{
	return a*b;
}

int main()
{
	int a[MAX]; //int a[100]
	BOOL flag;

	//int b = MUL(10, 2);
	int b = MUL(5+5, 2); // (5+5)*2
	//int b = my_mul(5+5, 2);
	printf("b = %d\n", b);

	return 0;
}


