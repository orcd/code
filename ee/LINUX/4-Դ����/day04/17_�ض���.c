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
	int fd1 = dup(1); //fd1就是1的备份，最小可用的
	printf("fd1 = %d\n", fd1); //fd1 == 3
	//3 ---> 屏幕
	//1 ---> 屏幕
	write(3, "bad\n", 4); //还是往屏幕写

	close(1); //关闭标准输出， 1就是最小可用的文件描述符, 关闭前，最好先printf打印一下
	int fd;
	fd = open("17.txt", O_WRONLY|O_CREAT, 0666); // 1 ----> 17.txt
	if(fd < 0)
	{
		perror("open");
		return -1;
	}
	printf("fd = %d\n", fd); //write(1, 
	printf("are u ok\n");

	//接下来使用printf(), 恢复到屏幕
	close(1); //1就是最小可用的
	dup(3); //复制3， 返回值就是1， 3 -----> screen, 1 ------> screen
	close(3);
	printf("11111111111111111\n");


	return 0;
}


