/* ************************************************************************
 *       Filename:  20_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月21日 17时07分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	pid_t pid = wait(NULL);
	printf("pid = %d\n", pid); //返回-1



	return 0;
}


