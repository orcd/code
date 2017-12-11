/* ************************************************************************
 *       Filename:  13_cat命令的实现.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 14时49分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main(int n, char *p[])
{
	if(n != 2)
	{
		printf("use err: ./a.out somefile\n");
		return -1;
	}

	FILE * fp = fopen(p[1], "r");
	if(NULL == fp)
	{
		printf("%s 不存在\n", p[1]);
		return -1;
	}

	char ch;
	while(1)
	{
		ch = fgetc(fp); //从文件读取一个字符
		if( feof(fp) ) //如果到文件结尾，退出循环
		{
			break;
		}
		printf("%c", ch);
	}

	fclose(fp);

	return 0;
}


