/* ************************************************************************
 *       Filename:  13_有参无返回值.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 16时05分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

//有参无返回值函数的定义
//1、无返回值用void修饰
//2、有参，在()里面定义变量， 类型 变量名， 类型 变量名， ……
//3、()里面的变量叫做形式参数，形参，不能初始化
//4、只有函数调用时，形参才会定义，函数调用完毕，自动释放
//5、调用时，可以给形参传参，反过来不行， 单向传递
void func(int a, char ch, char str[100])
{
	printf("a = %d, ch = %c, str = %s\n", a, ch, str);

	a = 111;
	printf("a = %d\n", a);
}

int main()
{
	//有参无返回值函数的调用： 函数名字(所需参数)， 调用时的参数叫做实参
	func(250, 'm', "abc"); //常量
	//func(int a = 250, char c = 'c', char str[100] = "abc"); //err
	int m = 250;
	char c = 'a';
	char buf[] = "abc";
	func(m, c, buf); //变量

	return 0;
}


