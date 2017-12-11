/* ************************************************************************
 *       Filename:  07_系统调用和库函数区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月18日 17时18分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
/* 	int fd = open("7.txt", O_WRONLY|O_CREAT, 0666);
 * 	write(fd, "abc", 3);
 */

	FILE *fp = fopen("7.txt", "w");
	fputs("abc", fp);

	while(1);
	return 0;
}


