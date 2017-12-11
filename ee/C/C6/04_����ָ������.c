#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int my_add(int a, int b)
{
	return a + b;
}

int my_min(int a, int b)
{
	return a - b;
}

int my_mul(int a, int b)
{
	return a * b;
}

int my_div(int a, int b)
{
	return a / b;
}

int my_test(int a, int b)
{
	return a % b;
}

int main(void)
{
	//它是数组，每个元素都是函数指针类型
	int  (*p[])(int, int) = { my_add, my_min, my_mul, my_div, my_test }; 
	char * str[] = { "add", "min", "mul", "div", "test" }; //它也是指针数组，每个元素为char *
	int n = sizeof(p) / sizeof(p[0]);
	//printf("n = %d\n", n);

	char cmd[10];
	int a, b, i;
	while (1)
	{
		printf("请输入指令：");
		scanf("%s %d %d", cmd, &a, &b); //add 1 1

		for (i = 0; i < n; i++)
		{
			if (strcmp(cmd, str[i]) == 0)
			{
				printf("result = %d\n", p[i](a, b));
				break;
			}
		}

	}

	printf("\n");
	system("pause");
	return 0;
}

int main03(void)
{
	typedef int(*PARRAY)(int a, int b); //定义一个函数指针类型
	PARRAY p[] = { my_add, my_min, my_mul, my_div, my_test}; //它是数组，每个元素都是函数指针类型
	char * str[] = {"add", "min", "mul", "div", "test"}; //它也是指针数组，每个元素为char *
	int n = sizeof(p) / sizeof(p[0]);
	//printf("n = %d\n", n);

	char cmd[10];
	int a, b, i;
	while (1)
	{
		printf("请输入指令：");
		scanf("%s %d %d", cmd, &a, &b); //add 1 1

		for (i = 0; i < n; i++)
		{
			if (strcmp(cmd, str[i]) == 0)
			{
				printf("result = %d\n", p[i](a, b));
				break;
			}
		}

	}

	printf("\n");
	system("pause");
	return 0;
}

int main02(void)
{
	typedef int(*PARRAY)(int a, int b); //定义一个函数指针类型
	PARRAY p = my_add; //函数指针变量，指向my_add函数
	printf("%d\n", p(1, 1));


	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	char cmd[10];
	int a, b;
	while (1)
	{
		printf("请输入指令：");
		scanf("%s %d %d", cmd, &a, &b); //add 1 1

		if (strcmp(cmd, "add") == 0)
		{
			printf("result = %d\n", my_add(a, b));
		}
		else if (strcmp(cmd, "min") == 0)
		{
			printf("result = %d\n", my_min(a, b));
		}
		else if (strcmp(cmd, "mul") == 0)
		{
			printf("result = %d\n", my_mul(a, b));
		}
		else if (strcmp(cmd, "div") == 0)
		{
			printf("result = %d\n", my_div(a, b));
		}

	}


	printf("\n");
	system("pause");
	return 0;
}
