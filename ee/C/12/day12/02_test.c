/* ************************************************************************
 *       Filename:  02_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 09时42分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	//如果程序没有结束， printf(), 如果没有缓冲，不能打印， linux
	printf("aaaaaaaaa");
	fflush(stdout); //刷新缓冲区
	while(1);
	return 0;
}


