/* ************************************************************************
 *       Filename:  06_线程id.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月25日 14时44分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	//获取主线程的ID
	pthread_t tid = pthread_self();
	printf("tid = %lu\n", tid);

	//比较是否相等
	if( pthread_equal(tid, pthread_self()) == 0)
	{
		printf("不相等\n");
	}
	else
	{
		printf("相等\n");
	}
	while(1);

	return 0;
}


