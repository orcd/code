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
	printf("tid = %lu\n", pthread_self());
	while(1)
	{
		sleep(1);
		printf("sub thread\n");
	}
}

int main(int argc, char *argv[])
{
	pthread_t tid;

	//创建线程
	//第2个参数为线程属性
	//最后一个参数，给func传递的参数
	int ret = pthread_create(&tid, NULL, func, NULL);
	if(ret != 0)
	{
		printf("err %s\n", strerror(ret));
		return ret;
	}
	printf("main tid = %lu\n", pthread_self());
	printf("sub tid = %lu\n", tid);

	//主线程
	while(1)
	{
		sleep(1);
		printf("main thread\n");
	}

	return 0;
}


