/* ************************************************************************
 *       Filename:  05_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月27日 10时19分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

//定义互斥锁
pthread_mutex_t lock;

void test_one()
{
	pthread_mutex_lock(&lock); //加锁, 把锁的状态标志位加锁
	printf("1111111111111\n");
}

void test_two()
{
	pthread_mutex_lock(&lock); //加锁, 把锁的状态标志位加锁
	printf("222222222\n");
}

int main(int argc, char *argv[])
{
	pthread_mutex_init(&lock, NULL);

	test_one();
	test_one();
	
	while(1);
	pthread_mutex_destroy(&lock);

	return 0;
}

int main01(int argc, char *argv[])
{

	//初始化，默认锁是打开的
	pthread_mutex_init(&lock, NULL);

	
	printf("1111111111\n");
	pthread_mutex_lock(&lock); //加锁, 把锁的状态标志位加锁
	printf("2222222222\n");

	pthread_mutex_lock(&lock); //检查到锁的状态已经加锁，所以，一直阻塞
	printf("333333333\n");


	while(1);
	pthread_mutex_destroy(&lock);

	return 0;
}


