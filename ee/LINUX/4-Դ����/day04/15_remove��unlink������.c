/* ************************************************************************
 *       Filename:  15_remove和unlink的区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 14时52分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	//只能删除文件，不能删除文件夹
	//remove(argv[1]); //库函数
	//unlink(argv[1]); //系统调用
	rmdir(argv[1]);

	return 0;
}


