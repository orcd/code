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
	//ѡ�����򣬵�0��Ԫ�طֱ�ͺ���ıȽ�
	//                    ��1��Ԫ�طֱ�ͺ���ıȽ�
	for (i = 0; i < n - 1; ++i)
	{
		for (j = i+1; j < n; ++j)
		{
			if (a[i] > a[j])
			{
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
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
