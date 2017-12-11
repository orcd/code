/* ************************************************************************
 *       Filename:  02_字符串的输出.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 10时48分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	char str[] = "hello";
	//printf("%s\n", str);
	//printf("%s", str);
	//puts(str); //没有改变原来的字符串，在打印时自动加换行

	//往stdout写内容
	fputs(str, stdout);
	fputs("\n", stdout);

	return 0;
}


