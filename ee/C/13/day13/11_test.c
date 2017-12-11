/* ************************************************************************
 *       Filename:  11_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 15时39分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	FILE *fp = fopen("11.txt", "w");

	fputs("abc\\0hello\n", fp);

	fclose(fp);

	return 0;
}


