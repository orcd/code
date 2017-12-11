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
	p = &a[0];
	for(i = 0; i < n; ++i)
	{
		printf("%d\n", *p);
		p++;
	}

	return 0;
}

int main01()
{
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(*a);
	int i;
	//需要一个指针指向首元素，首元素是int, 需要int *
	int *p;
	p = a;
	p = &a[0];

	for(i = 0; i < n; ++i)
	{
		printf("%d, %d, %d, %d\n", a[i], *(a+i), p[i], *(p+i));
	}
	
	return 0;
}


