/* ************************************************************************
 *       Filename:  15_多进程的创建.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月21日 15时07分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	int i = 0;
	int number = 2;
	for(i = 0; i < number; ++i)
	{
		fork();
	}

	while(1);
	return 0;
}


