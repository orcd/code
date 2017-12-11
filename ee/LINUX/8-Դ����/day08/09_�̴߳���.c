/* ************************************************************************
 *       Filename:  07_线程的创建.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月25日 14时56分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

void * func(void *p)
{
	int num = *(int *)p;
	printf("num = %d\n", num);

	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t tid;

	//创建线程
	//最后一个参数，给func传递的参数
	int num = 10;
	pthread_create(&tid, NULL, func, &num);

	//主线程
	while(1);

	return 0;
}


