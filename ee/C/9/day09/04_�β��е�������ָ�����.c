/* ************************************************************************
 *       Filename:  04_形参中的数组是指针变量.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 11时03分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

void func01(int a[100]) //a是形参中的数组
{
	int b[100]; //数组
}

//void func(int a[10])//形参中的数组不是数组，是指针变量
//void func(int a[])//和上面等价
void func(int *a)//和上面等价
{
	//a是变量
	int b;
	a = &b;
	*a = 111;
	printf("b = %d\n", b);

	printf("sizeof(a) = %lu\n", sizeof(a)); //测的结果是指针大小
}

int main()
{
	int a[10];
	//如果是数组，a是常量， sizeof(a)是数组总大小
	//a = 100;
	//printf("%lu\n", sizeof(a));

	func(NULL);




	return 0;
}


