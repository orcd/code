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

void * func1(void *p)
{
	while(1)
	{
		sleep(1);
		printf("sub thread1\n");
	}
}

void * func2(void *p)
{
	while(1)
	{
		sleep(1);
		printf("sub thread2\n");
	}
}

int main(int argc, char *argv[])
{
	pthread_t tid1, tid2;

	//创建线程
	//第2个参数为线程属性
	//最后一个参数，给func传递的参数
	pthread_create(&tid1, NULL, func1, NULL);
	pthread_create(&tid2, NULL, func2, NULL);

	//主线程
	while(1)
	{
		sleep(1);
		printf("main thread\n");
	}

	return 0;
}


