/* ************************************************************************
 *       Filename:  13_memcmp.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 15时50分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <string.h>
#include <stdio.h>

int main()
{
	char p1[] = "hello\0abc";
	char p2[] = "hello\0tea";

	//int flag = strncmp(p1, p2, sizeof(p1));
	int flag = memcmp(p1, p2, sizeof(p1));
	printf("flag = %d\n", flag);


	return 0;
}


