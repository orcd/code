/* ************************************************************************
 *       Filename:  03_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月25日 10时04分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	if(0 == fork())
	{
		setsid(); //创建会话


		while(1); //保证子进程不结束
	}
	else
	{
		sleep(10);
		exit(0);
	}

	return 0;
}


