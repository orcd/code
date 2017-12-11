/* ************************************************************************
 *       Filename:  10_NULL指针.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 14时38分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	// 0, '\0', NULL
	//NULL, 对于指针变量而言，作为一个标志位，说明这个指针变量没有任何指向
	int * p = NULL;
	//不能操作空指针所指向的内存
	//*p = 111; //err


	if(p == NULL)
	{
		int a;
		p = &a;
	}


	return 0;
}


