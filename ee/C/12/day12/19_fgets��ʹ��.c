/* ************************************************************************
 *       Filename:  17_fgets的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 16时10分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

int main02()
{
	FILE *fp = fopen("16.txt", "r");
	if( NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	char * p;
	char buf[1024];

	while(1)
	{
		memset(buf, 0, sizeof(buf));
		//遇到回车，或文件结尾
		p = fgets(buf, sizeof(buf)-1, fp);
		if(strlen(buf) > 0)
		{
			printf("buf = %s\n", buf);
		}

		if(feof(fp)) //判断文件结尾
		{
			break;
		}
	}
	

	fclose(fp);

	return 0;
}

int main()
{
	FILE *fp = fopen("16.txt", "r");
	if( NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	char * p;
	char buf[1024];

	while(1)
	{
		p = fgets(buf, sizeof(buf)-1, fp);
		if(NULL == p)
		{
			break;
		}
		printf("buf = %s\n", buf);
	}
	

	fclose(fp);

	return 0;
}


