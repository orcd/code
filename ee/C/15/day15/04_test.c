/* ************************************************************************
 *       Filename:  04_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月20日 10时36分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
#include <stdio.h>

char * test01()
{
	char buf[] = "abc"; //栈区数组，保存的是字符串的内容，没有保存地址
	//return buf; //函数调用完毕，栈区数组会字符，内存无法使用
	return &buf[0]; //函数调用完毕，栈区数组会字符，内存无法使用
}

char * test02()
{
	char * p = "abc"; //保存的地址，没有保存内容
	//return p; //函数调用完毕，p自动释放，返回的地址不是p的地址，是字符串常量的地址
	return &p[0]; //函数调用完毕，p自动释放，返回的地址不是p的地址，是字符串常量的地址
}

char * test03()
{
	static char buf[] = "abc"; //放在data区的数组，保存的是字符串的内容，没有保存地址
	//return buf;
	return &buf[0]; //data数组，函数调用完毕不释放，整个程序结束才释放
}

int main()
{
	char * p;
	p = test02();
	printf("p = %s\n", p);

	return 0;
}

