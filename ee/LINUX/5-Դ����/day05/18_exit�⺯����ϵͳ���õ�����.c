/* ************************************************************************
 *       Filename:  17_exit库函数和系统调用的区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月21日 16时20分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	printf("hello abc"); //没有换行
	//_exit(10); //系统调用，不会刷新缓冲区
	exit(10); //库调用，会刷新缓冲区

	while(1);
	return 0;
}


