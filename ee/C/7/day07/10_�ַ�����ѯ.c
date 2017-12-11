/* ************************************************************************
 *       Filename:  10_字符串查询.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 15时05分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "abcmikehello";
	char * p;

	//在str中，查找'm'所在的位置，第二个参数为字符
	//如果找到，返回匹配字符所在的位置
	//如果没有找到，返回NULL
	//p = strchr(str, 't'); //第二个参数为字符
	p = strstr(str, "mike"); //第二个参数为字符串
	if(p != NULL)
	{
		printf("p = %s\n", p);
	}

	return 0;
}


