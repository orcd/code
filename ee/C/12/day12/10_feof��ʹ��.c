/* ************************************************************************
 *       Filename:  10_feof的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 12时16分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	FILE *fp = fopen("10.txt", "r");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	while(1)
	{
		if( feof(fp) ) //到文件结尾，返回真
		{
			break;
		}

		printf("没有到文件结尾\n");
		fgetc(fp); //只是为了读取结尾状态，没有实际意义
	}


	fclose(fp);

	return 0;
}


