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
	//排序， 选择法排序
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
	p = (char **)malloc(n*sizeof(char *)); //sizeof()为char *, 不是char
	for (i = 0; i < n; ++i)
	{
		//char xxx[10]
		*(p + i) = (char *)malloc(sizeof(char)* 10); ////sizeof()为char
		//*(p + i) = (char *)malloc(10);
	}

	strcpy(p[0], "aa"); //分配的内容保存"aa", 元素是char
	strcpy(p[1], "bb");
	strcpy(p[2], "cc");
}

char ** get_mem2(int n)
{
	char **p;
	int i = 0;
	// char * xxx[3]
	p = (char **)malloc(n*sizeof(char *)); //sizeof()为char *, 不是char
	for (i = 0; i < n; ++i)
	{
		//char xxx[10]
		*(p + i) = (char *)malloc(sizeof(char)* 10); ////sizeof()为char
		//*(p + i) = (char *)malloc(10);
	}

	strcpy(p[0], "aa"); //分配的内容保存"aa", 元素是char
	strcpy(p[1], "bb");
	strcpy(p[2], "cc");

	return p;
}

void get_mem3(char *** tmp, int n)
{
	char **p;
	int i = 0;
	// char * xxx[3]
	p = (char **)malloc(n*sizeof(char *)); //sizeof()为char *, 不是char
	for (i = 0; i < n; ++i)
	{
		//char xxx[10]
		*(p + i) = (char *)malloc(sizeof(char)* 10); ////sizeof()为char
		//*(p + i) = (char *)malloc(10);
	}

	strcpy(p[0], "aa"); //分配的内容保存"aa", 元素是char
	strcpy(p[1], "bb");
	strcpy(p[2], "cc");

	*tmp = p; //间接赋值，很重要
}

void free_mem(char ** p, int n) //释放堆区内存
{
	if (p == NULL)
	{//异常处理
		return;
	}

	int i;
	//释放堆区空间
	for (i = 0; i < n; ++i)
	{
		free(p[i]);
	}
	free(p);
	p = NULL;
}

void free_mem2(char *** tmp, int n) //释放堆区内存
{
	char ** p = *tmp;
	if (p == NULL)
	{//异常处理
		return;
	}

	int i;
	//释放堆区空间
	for (i = 0; i < n; ++i)
	{
		free(p[i]);
	}
	free(p);
	p = NULL;
	*tmp = NULL;
}

// 让p指向一段内存，让这块内存保存内容
int main(void)
{
	char **p = NULL;  //p指向堆区数组，指向首元素
	int n = 3;
	//get_mem(p, n); //err, 值传递，形参修改不会影响到实参
	//p = get_mem2(n);  //返回堆区地址
	get_mem3(&p, n); //地址传递

	printf("排序前：");
	print_array(p, n);

	sort_array(p, n); //选择法排序

	printf("排序后：");
	print_array(p, n);

	//free_mem(p, n); //释放堆区内存
	//p = NULL;

	free_mem2(&p, n); //地址传递

	printf("\n");
	system("pause");
	return 0;
}


// 让p指向一段内存，让这块内存保存内容
int main01(void)
{
	char **p;  //p指向堆区数组，指向首元素
	int n = 3;
	int i = 0;
	// char * xxx[3]
	p = (char **)malloc(n*sizeof(char *)); //sizeof()为char *, 不是char
	for (i = 0; i < n; ++i)
	{
		//char xxx[10]
		*(p + i) = (char *)malloc(sizeof(char)* 10); ////sizeof()为char
		//*(p + i) = (char *)malloc(10);
	}

	strcpy(p[0], "aa"); //分配的内容保存"aa", 元素是char
	strcpy(p[1], "bb");
	strcpy(p[2], "cc");


	printf("排序前：");
	print_array(p, n);

	sort_array(p, n); //选择法排序

	printf("排序后：");
	print_array(p, n);

	//释放堆区空间
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