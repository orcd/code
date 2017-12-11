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
	FILE *fp = fopen("5.txt", "r"); //读文件
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	char ch;
	ch = fgetc(fp); //从文件读取一个字符，放入ch
	printf("ch = %c\n", ch);

	ch = fgetc(fp); //从文件读取一个字符，放入ch
	printf("ch = %c\n", ch);

	//读到结尾位置，读取失败，返回-1
	ch = fgetc(fp); //从文件读取一个字符，放入ch
	printf("ch = %d\n", ch);

	ch = fgetc(fp); //从文件读取一个字符，放入ch
	printf("ch = %d\n", ch);


	fclose(fp);

	return 0;
}


