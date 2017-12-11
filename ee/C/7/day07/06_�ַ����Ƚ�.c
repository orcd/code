/* ************************************************************************
 *       Filename:  06_字符串比较.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 11时53分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "abcmike";
	char s2[] = "abc";
	//int flag = strcmp(s1, s2);
	int flag = strncmp(s1, s2, 4);
	printf("flag = %d\n", flag);

	return 0;
}


