#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ṹ�����͵Ķ���
typedef struct Teacher
{
	char *name;
	int age;
}Teacher; //�зֺ�

int main(void)
{
	int n = 3;
	//�������飬 ��Ԫ��Teacher, ��3��
	//ָ����Ԫ�أ���ҪTeacher *
	Teacher * a = (Teacher *)malloc(n * sizeof(Teacher));

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		a[i].name = (char *)malloc(10);
		sprintf(a[i].name, "mike%d%d%d", i, i, i);
		a[i].age = i + 18;
		printf("%s, %d\n", a[i].name, a[i].age);
	}

	//���ͷų�Ա�����ͷ�a
	for (i = 0; i < n; ++i)
	{
		free(a[i].name);
	}
	free(a);
	a = NULL;

	printf("\n");
	system("pause");
	return 0;
}



int main02(void)
{
	Teacher a[3];
	int n = sizeof(a) / sizeof(*a);
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		a[i].name = (char *)malloc(10);
		sprintf(a[i].name, "mike%d%d%d", i, i, i);

		a[i].age = i + 18;

		printf("%s, %d\n", a[i].name, a[i].age);
	}

	for (i = 0; i < n; ++i)
	{
		free(a[i].name);
	}

	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	Teacher obj = { 0 }; //����һ���ṹ�����
	obj.name = (char *)malloc(10); //ָ������ռ�

	strcpy(obj.name, "mike"); //���Ǹ�name�������ݣ���name��ָ����ڴ濽������
	obj.age = 18;

	//����ṹ���������ͨ�ṹ�����(��ָ��)��ʹ�� . ������Ա
	printf("%s, %d\n", obj.name, obj.age);

	free(obj.name);


	printf("\n");
	system("pause");
	return 0;
}
