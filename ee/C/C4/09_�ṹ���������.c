#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//结构体类型的定义
typedef struct Teacher
{
	char name[50];
	int age;
}Teacher; //有分号

int main(void)
{
	//创建一个结构体变量， 同时初始化
	Teacher obj = {"mike", 18};

	//如果结构体变量是普通结构体变量(非指针)，使用 . 操作成员
	printf("%s, %d\n", obj.name, obj.age);

	//如果结构体变量是指针变量，使用->操作成员
	printf("%s, %d\n", (&obj)->name, (&obj)->age);

	Teacher *p = NULL;
	p = &obj;
	printf("%s, %d\n", p->name, p->age); //操作指针所指向的内存
	printf("%s, %d\n", (*p).name, (*p).age); 


	printf("\n");
	system("pause");
	return 0;
}
