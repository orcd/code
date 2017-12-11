/* ************************************************************************
 *       Filename:  14_下标引用不是数组专属.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 15时34分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a;
	int * p = &a;

	//a = 10;
	//*p ===> *(p+0) =====> p[0]
	//*和[]等价，都是操作指针所指向的内存
	//p[1] ====> *(p+1)
	p[0] = 11;
	printf("%d, %d, %d\n", a, *p, p[0]);

	int i = 0;
	//i[p] ===> *(i+p) ====> *(p+i) =====> *(p+0) ===> *p
	0[p] = 22; // *(0+p) ====> *(p+0)
	printf("%d\n", 0[p]);
	printf("%d, %d\n", p[i], i[p]);



	return 0;
}


