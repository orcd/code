/* ************************************************************************
 *       Filename:  11_stat和lstat的区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 11时41分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	struct stat buf;
	//stat("./1.txt", &buf); //获取的不是链接文件的属性，是链接文件所指向的文件的属性
	lstat("./1.txt", &buf); //获取的是链接文件的属性
	printf("size = %lu\n", buf.st_size);

	return 0;
}




