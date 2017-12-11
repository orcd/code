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
#include <string.h>

int main(int n, char *p[])
{
	if(n != 2)
	{
		printf("use err: ./a.out xxx.c\n");
		return -1;
	}

	FILE * fp = fopen(p[1], "w");
	if(NULL == fp)
	{
		perror("fopen err");
		return -1;
	}

	char buf[1024];
	while(1)
	{
		//从stdin(键盘)读取内容，放在buf中，最大读取sizeof(buf)-1
		fgets(buf, sizeof(buf), stdin); //每次读取一行
		//printf("buf = #%s#\n", buf);

		if( strncmp(buf, ":wq", 3) == 0)
		{
			break; //退出循环
		}

		int len = strlen(buf);
		int i;
		for(i = 0; i < len; ++i)
		{
			//printf("%c\n", buf[i]);
			fputc(buf[i], fp);
		}
	}


	fclose(fp);

	return 0;
}


