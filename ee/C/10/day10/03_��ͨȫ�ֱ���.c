/* ************************************************************************
 *       Filename:  03_普通全局变量.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 11时04分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	extern int a; //全部变量声明不能赋值，extern只能修饰普通函数或普通全局变量，不能修饰局部变量
	extern int a;
	extern int a;
	extern int a;
	extern int a;
	a = 10; //使用变量的前面，如果没有定义(在别的地方定义了)，需要声明
	printf("a = %d\n", a);
	return 0;
}

//定义在函数外部的就是全局变量，所有地方都能使用的变量，就是全局变量
//作用域：全局，所有地方都能使用
//生命周期：和static局部变量一样
//全局变量只能定义一次，但是可以声明多次
int a;


