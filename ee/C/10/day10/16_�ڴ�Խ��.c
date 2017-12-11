/* ************************************************************************
 *       Filename:  16_内存越界.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 16时54分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int  * p = (int *)malloc(0);
	if(p == NULL)
	{
		printf("malloc err\n");
		return -1;
	}

	*p = 111;
	printf("%d\n", *p);

	free(p);

	return 0;
}


