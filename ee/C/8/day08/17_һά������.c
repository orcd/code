/* ************************************************************************
 *       Filename:  17_一维数组名.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 16时35分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a[10];
	printf("%p, %p\n", a, &a[0]);

	//数组名不当做首元素地址使用的2种情况
	//1、这里的a当做数组类型，不是当做首元素地址
	printf("sizeof(a) = %lu\n", sizeof(a));
	printf("sizeof(a+0) = %lu\n", sizeof(a+0));//这里测试的是首元素地址大小，指针大小

	//2、&a 不当做首元素地址，是整个数组的地址
	
	int n = sizeof(a)/sizeof(a[0]);
	n = sizeof(a)/sizeof(*a); //*a ===>  *(a+0) ===> a[0]
	int i = 0;
	for(i = 0; i < n; ++i)
	{
		a[i] = i+1;
		printf("%d, ", *(a+i));
	}
	printf("\n");



	return 0;
}


