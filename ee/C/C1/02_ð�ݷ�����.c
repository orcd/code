#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

//��Ԫ����int, ��Ҫint *
void init_array(int * a, int n)
{
	//��������
	srand((unsigned int)time(NULL));

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		a[i] = rand() % 100;
		printf("%d, ", a[i]);
	}
	printf("\n");
}

void sort_array(int *a, int n)
{
	int i, j, tmp;
	//ð�����򣬰��ŵ�2��Ԫ�رȽ�
	for (i = 0; i < n - 1; ++i)
	{
		for (j = 0; j < n - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

}

void print_array(int * a, int n)
{
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

int main(void)
{
	int a[10];
	int n = sizeof(a) / sizeof(*a);

	init_array(a, n); //��������

	sort_array(a, n); //ð������

	print_array(a, n); //��ӡ


	printf("\n");
	system("pause");
	return 0;
}
