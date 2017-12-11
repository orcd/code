/* ************************************************************************
 *       Filename:  17_缓冲区验证.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 17时04分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	FILE *fp = fopen("17.txt", "w");
	//1、如果程序没有结束，用户没有关闭文件, 默认情况下，缓冲区满了，才能写入文件
	//2、人为刷新缓冲区
	//3、关闭文件
	//4、程序正常结束，自动关闭文件，自动刷新缓冲区
	fputs("abc", fp);
	//fclose(fp);

	//while(1);
	return 0;
}


