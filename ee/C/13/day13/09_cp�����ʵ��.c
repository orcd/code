/* ************************************************************************
 *       Filename:  14_cp命令的实现.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 15时08分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int n, char **p)
{
	if(n != 3)
	{
		printf("use err: ./a.out src dst\n");
		return -1;
	}

	printf("%s, %s\n", p[1], p[2]);
	if( strcmp(p[1], p[2]) == 0)
	{
		printf("源文件和目的文件同名，不允许操作\n");
		return -2;
	}

	FILE *fp1;
	FILE *fp2;
	
	fp1 = fopen(p[1], "r"); //以只读方式打开源文件
	if(NULL == fp1)
	{
		perror("fp1 open");
		return -3;
	}

	fp2 = fopen(p[2], "w"); //以只写方式打开目的文件
	if(NULL == fp2)
	{
		fclose(fp1);
		perror("fp2 open");
		return -4;
	}

	char buf[1024*4];
	int ret;
	while(1)
	{
		ret = fread(buf, 1, sizeof(buf),  fp1); //返回值就是读取内容的大小
		if(ret == 0)
		{
			break;
		}

		fwrite(buf, 1, ret, fp2 ); //读多少写多少
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}


