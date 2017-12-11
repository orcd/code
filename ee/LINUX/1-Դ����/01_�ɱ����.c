/* ************************************************************************
 *       Filename:  01_可变参数.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月15日 17时01分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdarg.h>
#include <stdio.h>

//1、可变参数，用三个点表示，一定是最后一个参数
//2、可变参数的前面，至少有一个变量
//3、函数内部无法确定参数个数和参数类型
void func(int n, ...)
{
	//1、定义变量
	va_list ap;

	//2、初始化
	//第2个参数为可变参数前面变量
	va_start(ap, n);

	//3、取参数
	int i = 0;
	printf("n = %d\n", n);
	for(i = 0; i < n; ++i)
	{
		//取int大小，每取完一个参数，自动后移
		int num = va_arg(ap, int);
		printf("num = %d\n", num);
		
	}

	//4、结束
	va_end(ap);
}

int main(int argc, char *argv[])
{
	//func(1);
	//func(2, 2, 3);
	func(3, 5, 2, 3);

	return 0;
}


