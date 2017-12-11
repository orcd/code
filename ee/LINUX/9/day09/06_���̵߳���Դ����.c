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



void my_print(char *str)
{
	while(*str != '\0')
	{
		putchar(*str);
		fflush(stdout);
		str++;
		usleep(1000*500); //500毫秒， usleep()以微秒为单位
	}
}

void * func_one(void *p)
{
	char *str = "hello";
	my_print(str);
	return NULL;
}

void * func_two(void *p)
{
	char *str = "world";
	my_print(str);
	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t tid1, tid2;
	
	pthread_create(&tid1, NULL, func_one, NULL);
	pthread_create(&tid2, NULL, func_two, NULL);



	while(1);

	return 0;
}


