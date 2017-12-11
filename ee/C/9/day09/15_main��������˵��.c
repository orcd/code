/* ************************************************************************
 *       Filename:  15_main函数参数说明.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 16时56分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

//int main(int n, char *tmp[])
int main(int n, char **tmp)
{
	int i = 0;
	for(i = 0; i < n; ++i)
	{
		printf("tmp[%d] = %s\n", i, tmp[i]);
	}

	return 0;
}


