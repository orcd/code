/* ************************************************************************
 *       Filename:  05_fputc的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 11时13分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	//1、打开文件
	FILE * fp = fopen("5.txt", "w");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}
	//2、写文件
	fputc(97, fp); //往fp所关联的文件，写入一个字符, 每写一个字符，光标自动往后移动
	char ch = fputc('b', fp); //返回值，成功为写入文件的字符，失败为-1
	printf("ch = %d\n", ch);

	//3、关闭文件
	fclose(fp);

	return 0;
}


