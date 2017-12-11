/* ************************************************************************
 *       Filename:  12_map_file.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月22日 16时16分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../../header.h"

int main(int argc, char *argv[])
{
	//新建文件
	int fd;
	int size;
	fd = open("./12.txt", O_RDWR);
	if(fd < 0)
	{
		perror("open");
		return -1;
	}

	//获取文件大小
	size = lseek(fd, 0, SEEK_END);
	//lseek(fd, 0, SEEK_SET);

	void * p = mmap(NULL, size, PROT_WRITE, MAP_SHARED, fd, 0);
	if(p == MAP_FAILED)
	{
		perror("mmap");
		return -1;
	}
	close(fd); //映射完毕，文件不需要使用了

	strcpy((char *)p, "hello mike");

	munmap(p, size);


	return 0;
}




