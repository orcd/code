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

int main()
{
	FILE *fp = fopen("16.txt", "r");
	if( NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	char * p;
	char buf[5];
	
	//默认遇到换行，到文件结尾，结束本次读取
	//返回值，成功返回读取的字符串，失败返回NULL
	//读取长度，如果没有超过sizeof(buf), 一次读取完，读一行
	//读取长度，如果超过sizeof(buf), 一次sizeof(buf)-1
	p = fgets(buf, sizeof(buf), fp);
	printf("p = %s, buf = %s\n", p, buf);
	
	p = fgets(buf, sizeof(buf), fp);
	printf("p = %s, buf = %s\n", p, buf);

	//这里到文件结束的位置，读取失败，不会改变buf内容，buf保留上一次内容
	memset(buf, 0, sizeof(buf));
	p = fgets(buf, sizeof(buf), fp);
	printf("p = %s, buf = %s\n", p, buf);

	memset(buf, 0, sizeof(buf));
	p = fgets(buf, sizeof(buf), fp);
	printf("p = %s, buf = %s\n", p, buf);

	fclose(fp);

	return 0;
}


