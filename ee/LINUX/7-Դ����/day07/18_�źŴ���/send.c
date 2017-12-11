/* ************************************************************************
 *       Filename:  send.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 17时09分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../../header.h"

int main(int argc, char *argv[])
{
	pid_t other_pid = atoi(argv[1]);
	int num  = atoi(argv[2]);

	printf("mypid = %u\n", getpid());

	union sigval val;
	val.sival_int = num;

	sigqueue(other_pid, 10, val);


	return 0;
}


