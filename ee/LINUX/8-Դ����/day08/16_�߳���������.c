/* ************************************************************************
 *       Filename:  16_线程属性设置.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月25日 17时04分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

void * func(void *p)
{
	printf("hello mike\n");
}

int main(int argc, char *argv[])
{
	//设置分离状态，让系统自动回收子线程资源
	pthread_attr_t attr; //定义一个变量
	pthread_t tid;

	//初始化
	pthread_attr_init(&attr);

	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED); //设置分离

	//获取分离状态
	int status = 10;
	pthread_attr_getdetachstate(&attr, &status);
	printf("%d\n", status);
	printf("%d\n", PTHREAD_CREATE_DETACHED); 

	pthread_create(&tid, &attr, func, NULL);

	sleep(1);

	//释放
	pthread_attr_destroy(&attr);

	return 0;
}


