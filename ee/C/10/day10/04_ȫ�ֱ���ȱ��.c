/* ************************************************************************
 *       Filename:  04_全局变量缺陷.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 11时15分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
#include <stdio.h>

int b;
int b;
int b = 10; //定义，其它都是声明
int b;
int b;
int b;

int c;
int c;
int c;
int c;
int c;
int c;

extern int d;
extern int d;
extern int d;
extern int d;
extern int d;
int d = 0; //只有定义时，才能初始化
extern int d;

int main()
{
	//局部变量，不能重复定义
	int a;
	//int a;
	//int a;
	
	printf("b = %d\n", b);
	c = 100;
	printf("c = %d\n", c);

	return 0;
}

int main01()
{
	//定义和声明
	//定义是声明的一种特殊情况，声明不需分配内存，定义需要内存
	
	//extern int a = 10; //声明无法赋值，没有内存，何来初始化
	extern int a; //可以只有声明，没有定义，和函数一样

	return 0;
}


