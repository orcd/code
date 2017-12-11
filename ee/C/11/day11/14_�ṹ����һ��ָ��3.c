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
#include <stdlib.h>

//声明一个结构体类型，它是类型，不是变量
struct Student
{
	int score;
	char *name;
	int age;
}; //这里有分号，这是语法

int main()
{
	struct Student * p;
	int n = 3;
	int i;
	//指向堆区数组， struct Student *指向struct Student， 指向首元素地址
	p = (struct Student *)malloc(n*sizeof(struct Student));
	for(i = 0; i < n; ++i)
	{
		(p+i)->name = (char *)malloc(100);

		(p+i)->score = 59+2*i;
		strcpy((p+i)->name, "mike");
		(p+i)->age = 18+2*i;
		printf("%d, %s, %d\n", (p+i)->score, (p+i)->name, p[i].age);
	}

	//先释放成员，再释放p
	for(i = 0; i < n; ++i)
	{
		free( (p+i)->name );
		(p+i)->name = NULL;
	}
	//循环的外部
	free(p);
	p = NULL;


	return 0;
}




