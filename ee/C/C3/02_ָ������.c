#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print_array(char **a, int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("%s, ", a[i]);
	}
	printf("\n");
}

void sort_array(char **a, int n)
{
	int i, j;
	char *tmp;
	//ÅÅÐò£¬ Ñ¡Ôñ·¨ÅÅÐò
	for (i = 0; i < n - 1; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{
			if (strcmp(a[i], a[j]) < 0)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main(void)
{
	char *a[3];

	a[0] = "aa";
	a[1] = "bb";
	a[2] = "cc";

	int n = sizeof(a) / sizeof(*a);

	printf("ÅÅÐòÇ°£º");
	print_array(a, n);

	sort_array(a, n); //Ñ¡Ôñ·¨ÅÅÐò

	printf("ÅÅÐòºó£º");
	print_array(a, n);

	printf("\n");
	system("pause");
	return 0;
}


//±£´æµØÖ·£¬²»±£´æÄÚÈÝ
int main01(void)
{
	char *a[3];

	a[0] = "aa";
	a[1] = "bb";
	a[2] = "cc";

	int n = sizeof(a) / sizeof(*a);
	int i, j;
	char *tmp;
	printf("ÅÅÐòÇ°: ");
	for (i = 0; i < n; ++i)
	{
		printf("%s, ", a[i]);
	}
	printf("\n");

	//print_array(a, n);

	//ÅÅÐò£¬ Ñ¡Ôñ·¨ÅÅÐò
	for (i = 0; i < n - 1; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{
			if (strcmp(a[i], a[j]) < 0)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	//sort_array(a, n);

	printf("ÅÅÐòºó: ");
	for (i = 0; i < n; ++i)
	{
		printf("%s, ", a[i]);
	}
	printf("\n");





	printf("\n");
	system("pause");
	return 0;
}
