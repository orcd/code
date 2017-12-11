/* ************************************************************************
 *       Filename:  03_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月20日 10时03分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

//返回值是char *
char * test()
{
	char buf[] = "hello abc"; //栈区，函数运行完，自动回收
	return &buf[0];
}

//返回值是char *
char * test02()
{
	static char buf[] = "hello abc";//放data区，函数完毕不释放，程序结束才释放 
	return &buf[0];
}

char * test01(char * p)
{
	strcpy(p, "hello mi");
	return p;
}

int main()
{
	char * p;

	//p = test(); //返回值没有意义
	//char str[] = "hello abc";
	//p = test01(str); //实参为首元素地址，首元素是char, 需要char *指向
	p = test02();
	//strcpy(p, "aaaa");
	printf("p = %s\n", p);

	return 0;
}


