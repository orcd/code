/* ************************************************************************
 *       Filename:  20_格式化字符串.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 17时06分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	char buf[100];
	sprintf(buf, "a=%d,b=%d\n", a, b);
	printf("buf = %s\n", buf);

	int i, j;
	sscanf(buf, "a=%d,b=%d\n", &i, &j);
	printf("i = %d, j= %d\n", i, j);


	return 0;
}


