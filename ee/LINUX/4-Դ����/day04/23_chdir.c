/* ************************************************************************
 *       Filename:  23_chdir.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 16时52分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/



#include "../header.h"

int main(int argc, char *argv[])
{
#ifdef DEBUG
	chdir("../"); //改变应用程序的工作路径
#endif

	int fd = open("23.txt", O_WRONLY|O_CREAT, 0666);




	return 0;
}

