/* ************************************************************************
 *       Filename:  06_fgetc的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 11时37分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	FILE *fp = fopen("7.txt", "w"); //写文件
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}
	fputc('a', fp);
	fputc('b', fp);
	fputc(-1, fp);
	fputc('c', fp);
	fputc(-1, fp);
	fputc('d', fp);

	fclose(fp);

	return 0;
}


