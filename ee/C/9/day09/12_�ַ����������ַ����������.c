/* ************************************************************************
 *       Filename:  12_字符串常量和字符数组的区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 15时56分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	const char *p = "abc";	//保存了地址，没有保存内容
	char str[] = "abc"; //保存了内容，没有保存地址

	//*p = 't'; //err, 字符串常量只读，不能改
	p = "mike"; //ok, 指针变量本身能改

	*str = 't'; //ok, 数组元素能改
	//str = NULL; //err, 数组名为常量，不能改

	return 0;
}


