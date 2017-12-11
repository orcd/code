#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Teacher
{
	char name[50];
	char ** stu;
	int age;
}Teacher;

int main(void)
{
	int num = 4;
	int k = 0;
	int i = 0;
	int n = 3;
	Teacher *a;
	char ** tmp;
	a = (Teacher *)malloc(num * sizeof(Teacher));

	for (k = 0; k < num; ++k)
	{
		a[k].age = 18 + k;
		sprintf(a[k].name, "mike%d%d%d", k, k, k);

		tmp = (char **)malloc(n * sizeof(char *));

		for (i = 0; i < n; ++i)
		{
			tmp[i] = (char *)malloc(10 * sizeof(char));
			sprintf(tmp[i], "name%d%d%d", i, i, i);
		}
		a[k].stu = tmp;
	}

	for (k = 0; k < num; ++k)
	{
		printf("name = %s, age = %d\n", a[k].name, a[k].age);
		printf("\t");
		for (i = 0; i < n; ++i)
		{
			printf("%s, ", a[k].stu[i]);
		}
		printf("\n\n");
	}

	for (k = 0; k < num; ++k)
	{
		for (i = 0; i < n; ++i)
		{
			free(a[k].stu[i]);
		}
		free(a[k].stu);
	}

	free(a);
	a = NULL;

	printf("\n");
	system("pause");
	return 0;
}

int main02(void)
{
	Teacher a[4];
	int num = sizeof(a) / sizeof(*a);
	int k = 0;
	int i = 0;
	int n = 3;
	for (k = 0; k < num; ++k)
	{
		a[k].age = 18 + k;
		sprintf(a[k].name, "mike%d%d%d", k, k, k);

		char ** tmp;
		tmp = (char **)malloc(n * sizeof(char *));

		for (i = 0; i < n; ++i)
		{
			tmp[i] = (char *)malloc(10 * sizeof(char));
			sprintf(tmp[i], "name%d%d%d", i, i, i);
		}
		a[k].stu = tmp;
	}

	for (k = 0; k < num; ++k)
	{
		printf("name = %s, age = %d\n", a[k].name, a[k].age);
		printf("\t");
		for (i = 0; i < n; ++i)
		{
			printf("%s, ", a[k].stu[i]);
		}
		printf("\n\n");
	}

	for (k = 0; k < num; ++k)
	{
		for (i = 0; i < n; ++i)
		{
			free(a[k].stu[i]);
		}
		free(a[k].stu);
	}




	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	Teacher obj;
	obj.age = 18;
	strcpy(obj.name, "mike");

	char ** tmp;
	int n = 3;
	tmp = (char **)malloc(n * sizeof(char *));

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		tmp[i] = (char *)malloc(10 * sizeof(char));
		sprintf(tmp[i], "name%d%d%d", i, i, i);
	}
	obj.stu = tmp;

	printf("name = %s, age = %d\n", obj.name, obj.age);
	printf("\t");
	for (i = 0; i < n; ++i)
	{
		printf("%s, ", obj.stu[i]);
	}

	for (i = 0; i < n; ++i)
	{
		free(obj.stu[i]);
	}
	free(obj.stu);



	printf("\n");
	system("pause");
	return 0;
}
