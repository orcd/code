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
	FILE *fp = fopen("7.txt", "r"); //读文件
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	char ch;
	while(1)
	{
		ch = fgetc(fp);

		if(feof(fp)) //如果到文件结尾，返回真，跳出循环
		{
			break;
		}
		printf("ch = %c\n", ch);

	}

	fclose(fp);

	return 0;
}


