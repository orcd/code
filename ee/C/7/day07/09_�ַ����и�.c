/* ************************************************************************
 *       Filename:  09_字符串切割.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 14时38分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{

	char str[] = "abc,mike,hello,aaa,bbb,ccc";
	char * p;

	p = strtok(str, ","); //首次调用，第一个参数写数组名
	while( p != NULL)
	{
		printf("p = %s\n", p);
		p = strtok(NULL, ","); //非首次调用，第一个参数写NULL
	}


	return 0;
}

int main01()
{
	char str[] = "abc,mike,hello";
	char * p;

	//首次调用，第一个参数写数组名字
	//从首元素开始找匹配切割字符串，如果找到匹配字符，这个字符替换为'\0'
	//								如果没有找到匹配字符，直接返回字符串首元素位置
	//返回值为首元素的位置
	p = strtok(str, ",");
	printf("p = %s, str = %s\n", p, str);

	//str[] = "abc\0mike", 首次调用和非首次调用，传参不一样
	/*p = strtok(str, ",");
	printf("p = %s, str = %s\n", p, str);*/

	//非首次调用，第一个参数写NULL，这么写的目的跳过上一步处理的'\0'
	//			  找"," 如果找不到，同时到了结束符，这时候，直接返回刚刚开始找字符的位置
	//			  找"," 如果找到，在这个字符的位置替换为'\0'
	//str[] = "abc\0mike,hello"
	//str[] = "abc\0mike\0hello"
	//              p
	p = strtok(NULL, ",");
	printf("p = %s, str = %s\n", p, str);
	
	//str[] = "abc\0mike\0hello"
	//                    p
	p = strtok(NULL, ",");
	printf("p = %s, str = %s\n", p, str);

	//如果已经处理完最后一个字符串，再做处理，返回NULL, 代表操作失败，已经结束
	p = strtok(NULL, ",");
	printf("p = %d\n", p);

	return 0;
}


