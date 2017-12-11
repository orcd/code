/* ************************************************************************
 *       Filename:  01_普通局部变量.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 10时34分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

void func(int a)
{
	int b;
}

int main()
{
	//生命周期：程序执行到定义变量这句话才有效, 离开作用域，变量自动释放
	//作用域：{}, 函数， 条件或循环
	//普通局部变量，自动分配空间，自动释放，auto, 普通局部变量的定义可以加auto关键字修饰，加不加等价
	//不初始化，值为随机数
	int a;

	{
		auto int b;
	}
	//b = 10; //不属于这个作用域
	
	for(int i = 0; i < 10; ++i)
	{

	}
	//printf("i = %d\n", i); //err
	if(1)
	{
		int c;
	}


	return 0;
}


