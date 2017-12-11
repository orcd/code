#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a;
	int * p1 = &a;
	int ** p2 = &p1;
	int *** p3 = &p2;
	int **** p4 = &p3; //int **** p4 = 3538540;
	printf("p4 = %d, &p3 = %d\n",p4, &p3);

	*p4 = 111; //p3 = 111




	printf("\n");
	system("pause");
	return 0;
}
