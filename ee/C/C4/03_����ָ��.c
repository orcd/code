#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//3)先定义数组指针类型，根据类型再定义指针变量(常用)
	typedef int(*PARRAY)[10]; //PARRAY是类型，数组指针类型， 等价于1)中ARRAY *
	PARRAY p = NULL;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	p = &a;

	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		//p[i]====>*(p+i)===> *(&a+i)  err, 已经越界
		// ((*p)+i) ===>  *&a + i ====> 
		printf("%d, %d, %d\n", ((*p) + i), a + i, &a[i]);
		printf("%d, %d,  %d, %d\n", *((*p) + i), (*p)[i], *(a + i), a[i]);

	}

	printf("\n");
	system("pause");
	return 0;
}


int main03(void)
{
	//2) 直接定义数组指针变量(常用)
	int(*p)[10] = NULL;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	p = &a;

	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		//p[i]====>*(p+i)===> *(&a+i)  err, 已经越界
		// ((*p)+i) ===>  *&a + i ====> 
		printf("%d, %d, %d\n", ((*p) + i), a + i, &a[i]);
		printf("%d, %d,  %d, %d\n", *((*p) + i), (*p)[i], *(a + i), a[i]);

	}

	printf("\n");
	system("pause");
	return 0;
}


int main02(void)
{
	//定义一个数组类型
	typedef int ARRAY[10];
	//ARRAY a; //数组常量， a就是数组名
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	ARRAY *p; //p就是指针变量，数组指针变量

	//由于a和&a的值一样，
	//警告	1	warning C4047: “=”:“ARRAY (*)”与“int *”的间接级别不同	
	//a是首元素地址，首元素是int, a就是int *
	//p = a;
	p = &a; //p指向a这个数组, p指向ARRAY, ARRAY 是int [10]
	printf("%p, %p\n", p, *p);

	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		//p[i]====>*(p+i)===> *(&a+i)  err, 已经越界
		// ((*p)+i) ===>  *&a + i ====> 
		printf("%d, %d, %d\n", ((*p)+i), a+i, &a[i]); 
		printf("%d, %d,  %d, %d\n", *((*p) + i), (*p)[i], *(a + i), a[i]);

	}

	printf("p = %p, &p = %p\n", p, &p);



	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	//指针数组，指针的数组，它是数组，每个元素都是指针类型
	char *a[10];
	//数组指针，它是指针，指向整个数组的指针


	printf("\n");
	system("pause");
	return 0;
}
