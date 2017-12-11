/* ************************************************************************
 *       Filename:  12_access.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 14时33分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	if(0 == access(argv[1], F_OK))
	{
		printf("文件存在\n");
	}
	else
	{
		printf("不存在\n");
	}

	return 0;
}


