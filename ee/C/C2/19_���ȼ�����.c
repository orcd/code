#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a[] = { -2, 3, 5 };
	int b;
	int *p;

	p = a;
	//1、b = *p;
	//2、p++
	b = *p++;
	printf("b1 = %d, *p = %d\n", b, *p);

	p = a;
	//1、++p
	//2、b = *p
	b = *++p;
	printf("b2 = %d\n", b);

	p = a;
	//1、b = *p
	//2、(*p)++, 导致第0个元素+1， 变成-1
	b = (*p)++;
	printf("b3 = %d, a[0] = %d\n", b, a[0]);

	p = a;
	//1、++(*p); //导致第0个元素+1， 变为0
	//2、b = *p //0
	b = ++(*p);
	printf("b4 = %d, a[0] = %d\n", b, a[0]);

	//
	p = a;
	//1、b = *p
	//2、p++
	b = *(p++); //等价于b = *p++; 
	printf("b5 = %d\n", b); //0

	p = a;
	//1、++p
	//2、b = *p
	b = *(++p); //等价于*++p
	printf("b6 = %d\n", b); //3




	printf("\n");
	system("pause");
	return 0;
}
