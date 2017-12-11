/* ************************************************************************
 *       Filename:  07_stat.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 10时28分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	struct stat buf;
	stat("1.txt", &buf);
	printf("size = %ld\n", buf.st_size);
	printf("st_mode = %o\n", buf.st_mode); //权限, 以8进制方式打印

	if((S_IFMT & buf.st_mode) == S_IFREG)
	{
		printf("普通文件\n");
	}

	if( S_ISREG(buf.st_mode))
	{
		printf("普通文件\n");
	}
	
	if(buf.st_mode & S_IROTH)
	{
		printf("r");
	}
	if(buf.st_mode & S_IWOTH)
	{
		printf("w");
	}
	if(buf.st_mode & S_IXOTH)
	{
		printf("x");
	}
	printf("\n");


	return 0;
}


