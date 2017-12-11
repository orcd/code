/* ************************************************************************
 *       Filename:  17_重定向.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 15时32分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	//关闭1之前，先备份
	int fd1 = dup(1); //fd1就是1的备份，最小可用的 1和3都指向标准输出
	//printf("aaaaaaaaaa\n"); //要不先使用printf, 让其自动刷新缓冲区

	close(1); //关闭标准输出， 1就是最小可用的文件描述符, 使用dup, 关闭前，最好先printf打印一下
	int fd;
	fd = open("18.txt", O_WRONLY|O_CREAT, 0666); // 1 ----> 17.txt
	if(fd < 0)
	{
		perror("open");
		return -1;
	}
	printf("fd = %d\n", fd); 
	fflush(stdout);

	close(1); //使用完毕，把1关闭

	return 0;
}


