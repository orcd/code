/* ************************************************************************
 *       Filename:  03_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年10月08日 11时43分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

//#define MAX

int main()
{
	int a = 10;
	int b = 20;
	
#ifdef MAX
	int max = a>b?a:b;
	printf("max = %d\n", max);
#else
	int min = a > b ? b : a;
	printf("min = %d\n", min);
#endif


#if 1
	printf("111111111\n");
#endif 

	return 0;
}


