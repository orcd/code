/* ************************************************************************
 *       Filename:  12_main函数参数说明.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 14时46分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main(int n, char * p[])
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		printf("p[%d] = %s\n", i, p[i]);
	}

	return 0;
}


