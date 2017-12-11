/* ************************************************************************
 *       Filename:  05_raise.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 11时05分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{

	sleep(3);	
	//kill(getpid(), 2);
	//raise(2);
	//kill(getpid(), 6);
	abort();

	while(1);

	return 0;
}


