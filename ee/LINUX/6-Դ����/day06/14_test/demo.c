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
	int size = 128;


	void * p = mmap(NULL, size, PROT_WRITE|PROT_READ, MAP_SHARED|MAP_ANON, -1, 0);
	if(p == MAP_FAILED)
	{
		perror("mmap");
		return -1;
	}

	if(0 == fork())
	{
		int *tmp = (int *)p;
		*tmp = 250;
	}
	else
	{
		wait(NULL);
		int *tmp = (int *)p;
		printf("tmp = %d\n", *tmp);

	}


	munmap(p, size);


	return 0;
}




