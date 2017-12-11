/* ************************************************************************
 *       Filename:  11_字符串常量.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 15时33分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	//1、每一个字符串常量就是一个地址, 首元素地址， "abc"
	printf("%p, %p\n", "abc", "abc");
	//2、%s, 打印变量本身（地址本身）， 变量所指向的内存
	printf("%s, %s\n", "abc", "abc");
	printf("%s, %s\n", "abc"+1, "abc"+1);
	//3、打印首元素
	printf("%c, %c\n", *("abc"), ("abc")[0]);
	printf("%c, %c\n", *("abc"+1), ("abc")[1]);

	char * p1;
	char * p2;
	p1 = "abc";
	p2 = "abc";
	printf("p1 = %p, p2 = %p\n", p1, p2);
	printf("p1 = %s, p2 = %s\n", p1, p2);
	printf("&p1 = %p, &p2 = %p\n", &p1, &p2);



	return 0;
}


