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
	//���� ѡ������
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

// ��pָ��һ���ڴ棬������ڴ汣������
int main(void)
{
	char *a[3];
	int n = sizeof(a) / sizeof(*a);
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		a[i] = (char *)malloc(10);
	}

	strcpy(a[0], "aa");
	strcpy(a[1], "bb");
	strcpy(a[2], "cc");



	printf("����ǰ��");
	print_array(a, n);

	sort_array(a, n); //ѡ������

	printf("�����");
	print_array(a, n);

	//�ͷ�
	for (i = 0; i < n; ++i)
	{
		free(a[i]);
	}


	printf("\n");
	system("pause");
	return 0;
}