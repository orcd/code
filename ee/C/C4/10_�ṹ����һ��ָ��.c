#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//结构体类型的定义
typedef struct Teacher
{
	char *name;
	int age;
}Teacher; //有分号

int main(void)
{
	int n = 3;
	//堆区数组， 首元素Teacher, 有3个
	//指向首元素，需要Teacher *
	Teacher * a = (Teacher *)malloc(n * sizeof(Teacher));

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		a[i].name = (char *)malloc(10);
		sprintf(a[i].name, "mike%d%d%d", i, i, i);
		a[i].age = i + 18;
		printf("%s, %d\n", a[i].name, a[i].age);
	}

	//先释放成员，再释放a
	for (i = 0; i < n; ++i)
	{
		free(a[i].name);
	}
	free(a);
	a = NULL;

	printf("\n");
	system("pause");
	return 0;
}



int main02(void)
{
	Teacher a[3];
	int n = sizeof(a) / sizeof(*a);
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		a[i].name = (char *)malloc(10);
		sprintf(a[i].name, "mike%d%d%d", i, i, i);

		a[i].age = i + 18;

		printf("%s, %d\n", a[i].name, a[i].age);
	}

	for (i = 0; i < n; ++i)
	{
		free(a[i].name);
	}

	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	Teacher obj = { 0 }; //创建一个结构体变量
	obj.name = (char *)malloc(10); //指向堆区空间

	strcpy(obj.name, "mike"); //不是给name拷贝内容，给name所指向的内存拷贝内容
	obj.age = 18;

	//如果结构体变量是普通结构体变量(非指针)，使用 . 操作成员
	printf("%s, %d\n", obj.name, obj.age);

	free(obj.name);


	printf("\n");
	system("pause");
	return 0;
}
