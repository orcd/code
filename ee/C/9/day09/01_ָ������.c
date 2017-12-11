/* ************************************************************************
 *       Filename:  01_指针数组.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 09时50分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a = 10, b = 20, c = 30;
	int * p[] = {&a, &b, &c};
	//sizeof(p) 数组总大小， 3 * sizeof(int *) = 3 * 8 = 24
	//             sizeof(*p) ======  8        
	int n = sizeof(p)/sizeof(*p); //3
	//首元素是int *, 需要int **指向首元素
	int ** tmp = &p[0]; //int ** tmp = p;

	//如果通过tmp操作a, b, c
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d, %d, %d\n", *p[i], *(*(tmp+i)), tmp[i][0]);
	}



	return 0;
}


