/* ************************************************************************
 *       Filename:  02_static局部变量.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 10时42分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

void func01()
{
	int i = 0;
	i++;
	printf("i = %d\n", i);
}

void func02()
{
	//这个变量还叫局部变量，站在作用域角度看问题， 作用域，{}
	//生命周期：
	//    开始：(编译的时候已经确定空间大小)程序运行时，main函数调用前，已经分配空间
	//    28行，这句话用来编译代码，程序运行到28行，没有作用
	//    结束：整个程序结束，才释放
	//    没有初始化，自动赋值为0
	static int i = 0;
	i++;
	printf("i = %d\n", i);
}

int main()
{
	func02();
	func02();
	func02();

	{
		int a;
	}
	{
		int a;
	}

	return 0;
}


