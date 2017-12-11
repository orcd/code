/* ************************************************************************
 *       Filename:  main.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 17时26分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include "mygetch.h"

int main()
{
	char ch;
	//ch = getchar(); //标准C函数, 按回车
	ch = mygetch(); //无需回车键
	printf("ch = %c\n", ch);

	return 0;
}


