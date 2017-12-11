/* ************************************************************************
 *       Filename:  test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月21日 17时23分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../../header.h"


int main(int argc, char *argv[])
{
	printf("我是外部程序, getpid() = %u\n", getpid());
	printf("argv[1] = %s\n", argv[1]);

	return 0;
}


