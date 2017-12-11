/* ************************************************************************
 *       Filename:  02_标准设备文件.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月18日 16时08分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
	close(1);
	printf("hello mike\n");

	return 0;
}



