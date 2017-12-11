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

void get_mem(char **p, int n)
{
	int i = 0;
	// char * xxx[3]
	p = (char **)malloc(n*sizeof(char *)); //sizeof()Ϊchar *, ����char
	for (i = 0; i < n; ++i)
	{
		//char xxx[10]
		*(p + i) = (char *)malloc(sizeof(char)* 10); ////sizeof()Ϊchar
		//*(p + i) = (char *)malloc(10);
	}

	strcpy(p[0], "aa"); //��������ݱ���"aa", Ԫ����char
	strcpy(p[1], "bb");
	strcpy(p[2], "cc");
}

char ** get_mem2(int n)
{
	char **p;
	int i = 0;
	// char * xxx[3]
	p = (char **)malloc(n*sizeof(char *)); //sizeof()Ϊchar *, ����char
	for (i = 0; i < n; ++i)
	{
		//char xxx[10]
		*(p + i) = (char *)malloc(sizeof(char)* 10); ////sizeof()Ϊchar
		//*(p + i) = (char *)malloc(10);
	}

	strcpy(p[0], "aa"); //��������ݱ���"aa", Ԫ����char
	strcpy(p[1], "bb");
	strcpy(p[2], "cc");

	return p;
}

void get_mem3(char *** tmp, int n)
{
	char **p;
	int i = 0;
	// char * xxx[3]
	p = (char **)malloc(n*sizeof(char *)); //sizeof()Ϊchar *, ����char
	for (i = 0; i < n; ++i)
	{
		//char xxx[10]
		*(p + i) = (char *)malloc(sizeof(char)* 10); ////sizeof()Ϊchar
		//*(p + i) = (char *)malloc(10);
	}

	strcpy(p[0], "aa"); //��������ݱ���"aa", Ԫ����char
	strcpy(p[1], "bb");
	strcpy(p[2], "cc");

	*tmp = p; //��Ӹ�ֵ������Ҫ
}

void free_mem(char ** p, int n) //�ͷŶ����ڴ�
{
	if (p == NULL)
	{//�쳣����
		return;
	}

	int i;
	//�ͷŶ����ռ�
	for (i = 0; i < n; ++i)
	{
		free(p[i]);
	}
	free(p);
	p = NULL;
}

void free_mem2(char *** tmp, int n) //�ͷŶ����ڴ�
{
	char ** p = *tmp;
	if (p == NULL)
	{//�쳣����
		return;
	}

	int i;
	//�ͷŶ����ռ�
	for (i = 0; i < n; ++i)
	{
		free(p[i]);
	}
	free(p);
	p = NULL;
	*tmp = NULL;
}

// ��pָ��һ���ڴ棬������ڴ汣������
int main(void)
{
	char **p = NULL;  //pָ��������飬ָ����Ԫ��
	int n = 3;
	//get_mem(p, n); //err, ֵ���ݣ��β��޸Ĳ���Ӱ�쵽ʵ��
	//p = get_mem2(n);  //���ض�����ַ
	get_mem3(&p, n); //��ַ����

	printf("����ǰ��");
	print_array(p, n);

	sort_array(p, n); //ѡ������

	printf("�����");
	print_array(p, n);

	//free_mem(p, n); //�ͷŶ����ڴ�
	//p = NULL;

	free_mem2(&p, n); //��ַ����

	printf("\n");
	system("pause");
	return 0;
}


// ��pָ��һ���ڴ棬������ڴ汣������
int main01(void)
{
	char **p;  //pָ��������飬ָ����Ԫ��
	int n = 3;
	int i = 0;
	// char * xxx[3]
	p = (char **)malloc(n*sizeof(char *)); //sizeof()Ϊchar *, ����char
	for (i = 0; i < n; ++i)
	{
		//char xxx[10]
		*(p + i) = (char *)malloc(sizeof(char)* 10); ////sizeof()Ϊchar
		//*(p + i) = (char *)malloc(10);
	}

	strcpy(p[0], "aa"); //��������ݱ���"aa", Ԫ����char
	strcpy(p[1], "bb");
	strcpy(p[2], "cc");


	printf("����ǰ��");
	print_array(p, n);

	sort_array(p, n); //ѡ������

	printf("�����");
	print_array(p, n);

	//�ͷŶ����ռ�
	for (i = 0; i < n; ++i)
	{
		free(p[i]);
	}
	free(p);
	p = NULL;

	printf("\n");
	system("pause");
	return 0;
}