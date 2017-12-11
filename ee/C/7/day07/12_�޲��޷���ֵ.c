/* ************************************************************************
 *       Filename:  12_无参无返回值.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 15时50分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

//无参无返回值函数的定义
//1、无返回值用void修饰，函数名字唯一
//2、无参, ()里面没有定义变量
//3、{}叫函数体
void func()
//void func(void) //等价于上面
{
	int a;
	a = 10;
	printf("a = %d\n", a);
}

int main()
{
	int a;
	//无参无返回值函数的调用:  函数名字(), 不会出现void关键字
	//void func(); //不是调用
	//func(void); //err
	func();

	return 0;
}


