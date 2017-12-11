/* ************************************************************************
 *       Filename:  05_open.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月18日 16时53分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	int fd;
	//fd = open("3.txt", O_RDONLY); //只读方式打开文件, 文件不存在则打开失败
	//第3个参数，只有在文件不存在时，才有效
	//fd = open("5.txt", O_WRONLY|O_CREAT, 0666); //如果文件存在，只是以只写方式打开，不存在新建
	fd = open("5.txt", O_WRONLY|O_CREAT|O_TRUNC, 0666); //如果文件存在，只是以只写方式打开并清空内容，不存在新建
	if(fd < 0)
	{
		perror("open");
		return -1;
	}
	printf("fd = %d\n", fd);


	close(fd); //关闭文件

	return 0;
}


