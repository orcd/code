/* ************************************************************************
 *       Filename:  04_错误处理.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月18日 16时36分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	FILE *fp = fopen("xxxx", "r");
	if(NULL == fp)
	{
		printf("errno = %d\n", errno); //errno.h
		printf("strerror = %s\n", strerror(errno)); //string.h
		perror("fopen");
		return -1;
	}

	return 0;
}

