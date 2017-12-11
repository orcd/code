/* ************************************************************************
 *       Filename:  01_结构体的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 10时09分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

//声明一个结构体类型，它是类型，不是变量
struct Student
{
	int score;
	char name[50];
	int age;
}; //这里有分号，这是语法

int main()
{
	struct Student a[] = 
	{
		{59, "mike", 18},
		{66, "lili", 17},
		{77, "jack", 16}
	};
	int n = sizeof(a)/sizeof(*a);
	int i;
	int sum = 0;

	for(i = 0; i < n; ++i)
	{
		printf("%d, %s, %d\n", a[i].score, a[i].name, a[i].age);
		printf("%d, %s, %d\n", (*(a+i)).score, (*(a+i)).name, (*(a+i)).age);
		printf("%d, %s, %d\n", (&a[i])->score, (&a[i])->name, (&a[i])->age);
		printf("%d, %s, %d\n", (a+i)->score, (a+i)->name, (a+i)->age);

		sum += a[i].score;
	}

	printf("%d\n", sum/n);




	return 0;
}


