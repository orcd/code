#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义一个函数指针类型
typedef int (*PFUC)(int, int);
typedef struct Test
{
	PFUC func; //PFUC是函数指针类型， func是变量
}Test;

void set_func(Test *obj, PFUC tmp)
{
	obj->func = tmp;
}
int my_add(int a, int b)
{
	return a + b;
}

int main(void)
{
	//定义一个结构体变量
	Test obj;
	set_func(&obj, my_add); // obj.func = my_add
	int r = obj.func(2, 1);
	printf("r = %d\n", r);


	printf("\n");
	system("pause");
	return 0;
}
