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


int main(int argc, char *argv[])
{
	pthread_rwlock_init(&lock,	NULL);

	//申请写锁
	int ret = pthread_rwlock_wrlock(&lock);
	printf("ret = %d\n", ret);

	//申请读锁
	ret = pthread_rwlock_wrlock(&lock); //失败，不阻塞，失败
	printf("ret = %d\n", ret);
	//解开锁
	//pthread_rwlock_unlock(&lock);


	while(1);
	//销毁
	pthread_rwlock_destroy(&lock);

	return 0;
}

int main01(int argc, char *argv[])
{
	//初始化
	pthread_rwlock_init(&lock,	NULL);


	//申请读锁, 读时并行，可以多任务读取
	int ret = pthread_rwlock_rdlock(&lock);
	printf("ret = %d\n", ret);


	ret = pthread_rwlock_rdlock(&lock);
	printf("ret = %d\n", ret);


	while(1);
	//销毁
	pthread_rwlock_destroy(&lock);

	return 0;
}


