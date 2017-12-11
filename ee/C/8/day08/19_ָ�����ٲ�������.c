/* ************************************************************************
 *       Filename:  18_指针加法操作数组.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 16时47分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(*a);
	int i;

	int *p;
	p = &a[n-1]; //保存是尾元素
	for(i = 0; i < n; ++i)
	{
		printf("%d\n", *p);
		p--;
	}

	return 0;
}



