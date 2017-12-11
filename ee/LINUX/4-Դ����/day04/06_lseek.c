/* ************************************************************************
 *       Filename:  06_lseek.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 10时20分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	int fd = open("1.txt", O_WRONLY);
	long ret = lseek(fd, 88888888888, SEEK_SET);
	printf("ret = %ld\n", ret);
	write(fd, "a", 1);


	return 0;
}


