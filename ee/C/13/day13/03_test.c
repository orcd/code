/* ************************************************************************
 *       Filename:  03_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 10时57分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main()
{
	FILE *fp = fopen("3.txt", "w");

	char buf[] = "1+1=2\n1-2=-1\n2*2=4\n";

	fputs(buf, fp);

	fclose(fp);

	return 0;
}


