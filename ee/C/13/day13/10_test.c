/* ************************************************************************
 *       Filename:  10_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 15时15分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp = fopen("bbb.txt", "rb");

	char buf[100];
	fgets(buf, sizeof(buf), fp);
	//printf("buf = #%s#\n", buf);
	int n = strlen(buf);

	if(buf[n-2] == '\r')
	{
		printf("win file\n");
	}
	else
	{
		printf("linux file\n");
	}

	fclose(fp);

	return 0;
}


