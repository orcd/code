#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stddef.h> //offsetof

//1、首成员放低地址，尾成员放高地址，和数组类似
//2、首成员起点放偏移量为0的位置
typedef struct Teacher
{
	char name[10];  //12
	int age;				  //4
	int score;           //4
} Teacher;

int main(void)
{
	//第一个参数为结构体类型，
	//第二个参数为成员变量名
	int n =  offsetof(Teacher, age);
	printf("n = %d\n", n);

	printf("%d\n", sizeof(Teacher));

	Teacher obj;
	Teacher *p = &obj;
	n = (int)&(p->age) - (int)p;
	printf("n2 = %d\n", n);


	printf("\n");
	system("pause");
	return 0;
}
