/* ************************************************************************
 *       Filename:  24_readdir.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 17时05分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include "../header.h"

int main(int argc, char *argv[])
{

	//1、打开目录
	DIR * dir = opendir("./");
	if(NULL == dir)
	{
		perror("opendir");
		return -1;
	}

	//2、读取目录信息
	struct dirent *ptr;
	while( ( ptr = readdir(dir) ) != NULL)
	{
		printf("name = %s", ptr->d_name); //文件名字
		switch(ptr->d_type) //文件类型
		{
		case DT_DIR:
			printf(", 它是目录\n");
			break;
		case DT_LNK:
			printf(", 它是软链接\n");
			break;
		case DT_REG:
			printf(", 它是普通文件\n");
			break;
		}

	}


	//3、关闭目录
	closedir(dir);


	return 0;
}


