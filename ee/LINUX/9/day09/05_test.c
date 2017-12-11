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


int main(int argc, char *argv[])
{
	my_print("mike");

	while(1);

	return 0;
}


