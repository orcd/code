/* ************************************************************************
 *       Filename:  15_strlen的实现.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 16时46分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int my_strlen(char str[])
{
	int i = 0;
	while(str[i] != '\0')
	{
		++i;
	}

	return i;
}

int main()
{
	char str[] = "abc\012mike";
	int len;
	len = my_strlen(str);
	printf("len = %d\n", len);


	return 0;
}


