/* ************************************************************************
 *       Filename:  14_无参有返回值.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 16时20分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

//无参有返回值函数的定义
//1、通过return关键字返回内容，return 作用中断函数
//2、传参可以传递多个，返回值只有一个
int func()
{
	printf("func\n");
	int a = 250;
	return a;
	//return 250;
}

int main()
{
	//无参有返回值函数的调用
	//1、返回值可以不用
	//2、如果使用，定义匹配类型的变量来接收
	func();
	printf("%d\n", func());
	//int func(); //不是函数调用
	int n = func();
	int m;
	m = func();
	printf("m = %d, n = %d\n", m, n);

	return 0;
}


