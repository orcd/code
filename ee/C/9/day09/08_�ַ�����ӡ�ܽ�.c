/* ************************************************************************
 *       Filename:  _字符串打印总结.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 12时23分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	char str[] = "abc";
	//%s, 操作的不是变量本身，操作的是变量所指向的内存
	printf("%s\n", str); //打印的不是str, 而是*str, *(str+1), *(str+2), 遇到'\0'为止
	//printf("%s\n", str[0]); //err, 打印的不是str[0], 而是 *str[0], 操作野指针所指向内存
	//除了 %s, 其它情况都是传递什么，就是打印什么
	printf("%p, %p\n", str, &str[0]);
	printf("%c, %c\n", str[0], str[1]);
	printf("%s, %s, %s\n", str, str+1, str+2);


	return 0;
}


