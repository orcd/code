/* ************************************************************************
 *       Filename:  14_chown.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 14时48分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include "../header.h"


int main(int argc, char *argv[])
{

	chown(argv[1], 1001, 0);

	return 0;
}


