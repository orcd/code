/* ************************************************************************
 *       Filename:  10_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 14时50分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char * p;
	//char buf[100];
	//p = buf;
	char src[] = "abc";
	strcpy(p, src); //不是给p拷贝内容，是给p所指向的内存拷贝内容，p是野指针，err，操作野指针所指向的内存
	//printf("p = %s, buf = %s\n", p, buf);

	return 0;
}


