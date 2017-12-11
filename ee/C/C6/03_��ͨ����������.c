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
	char cmd[10];
	int a, b;
	while (1)
	{
		printf("«Î ‰»Î÷∏¡Ó£∫");
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
		else if (strcmp(cmd, "test") == 0)
		{
			printf("result = %d\n", my_test(a, b));
		}

	}


	printf("\n");
	system("pause");
	return 0;
}
