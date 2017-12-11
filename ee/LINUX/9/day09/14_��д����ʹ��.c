/* ************************************************************************
 *       Filename:  13_读写锁特点.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月27日 15时40分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

pthread_rwlock_t lock;
int num = 0;

void * write_func(void *p)
{
	while(1)
	{
		int ret = pthread_rwlock_wrlock(&lock); //申请写锁
		num++;
		printf("write lock ret = %d, num = %d\n", ret, num);
		pthread_rwlock_unlock(&lock); //解锁


		sleep( (rand())%3+1 ); //1~3

	}

	return NULL;
}


void * read_func(void *p)
{
	while(1)
	{
		int ret = pthread_rwlock_rdlock(&lock); //申请读锁
		printf("read lock ret = %d, num = %d\n", ret, num);
		pthread_rwlock_unlock(&lock); //解锁

		//sleep(1);
		sleep( (rand())%4+1 ); //1~4
	}

	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_rwlock_init(&lock,	NULL);

	srand(time(NULL));

	pthread_t tid[10];
	int i = 0;
	//3个线程写
	for(i = 0; i < 3; ++i)
	{
		pthread_create(&tid[i], NULL, write_func, NULL);
	}
	
	//7个线程读
	for(i = 3; i < 10; ++i)
	{
		pthread_create(&tid[i], NULL, read_func, NULL);
	}
	

	while(1);
	//销毁
	pthread_rwlock_destroy(&lock);

	return 0;
}


