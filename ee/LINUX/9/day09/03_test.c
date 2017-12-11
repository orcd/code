/* ************************************************************************
 *       Filename:  03_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月27日 10时06分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	int a = 10;
	void *p = (void *)a; //指针变量也是变量，是变量就能赋值
	printf("p = %d\n", (int)p);


	return 0;
}


