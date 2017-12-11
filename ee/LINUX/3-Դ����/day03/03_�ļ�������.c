/* ************************************************************************
 *       Filename:  03_文件描述符.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月18日 16时13分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{

	close(0); //关闭0后，0就成为最小可用的文件描述符
	int fd = open("3.txt", O_CREAT|O_WRONLY, 0666);
	printf("fd = %d\n", fd);


	return 0;
}


