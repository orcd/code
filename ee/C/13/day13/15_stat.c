/* ************************************************************************
 *       Filename:  15_stat.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 16时51分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main()
{
	struct stat tmp;
	stat("13.txt", &tmp);

	printf("%lu\n", tmp.st_size);

	return 0;
}


