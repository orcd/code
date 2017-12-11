/* ************************************************************************
 *       Filename:  06_二级指针的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月20日 10时50分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//实参类型的char *, 需要char **指向
void func(char ** p) //二级指针
{
	*p = (char *)malloc(4);
}

int main()
{
	char * p;
	func(&p); //地址传递
	strcpy(p, "abc");
	printf("p = %s\n", p);

	free(p);
	p = NULL;

	return 0;
}


