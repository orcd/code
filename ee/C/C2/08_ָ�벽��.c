#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1、指针步长， +1后的变化
	//2、指针步长由数据类型决定，由指针所指向的内存决定，不是有赋值内容决定
	//3、类型一样，步长肯定一样，步长一样，类型不一定一样

	int a = 0;
	printf("%d, %d\n", a, a+1);

	char *p = NULL;
	printf("%d, %d\n", p, p+1);

	//int *, 步长为4
	//char **， char **指向char *, +1， +sizeof(char *), +4
	//char *, char *指向char,  +1， +sizeof(char), +1
	//int ***, int ***指向int **, +1, +sizeof(int **), +4
	//double *, double *指向double, +1, +sizeof(double), +8
	


	printf("\n");
	system("pause");
	return 0;
}
