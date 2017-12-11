/* ************************************************************************
 *       Filename:  06_alarm.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 11时10分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	//第一次返回0
	//下一次返回上一个定时器的剩余秒数
	int ret = alarm(5);
	printf("ret = %d\n", ret);
	sleep(3);
	ret = alarm(5);
	printf("ret = %d\n", ret);
	
	alarm(0); //取消定时器

	while(1)
	{
		printf("hello mike\n");
		sleep(1);
	}

	return 0;
}


