#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ṹ�����͵Ķ���
typedef struct Teacher
{
	char name[50];
	int age;
}Teacher; //�зֺ�

int main(void)
{
	//����һ���ṹ������� ͬʱ��ʼ��
	Teacher obj = {"mike", 18};

	//����ṹ���������ͨ�ṹ�����(��ָ��)��ʹ�� . ������Ա
	printf("%s, %d\n", obj.name, obj.age);

	//����ṹ�������ָ�������ʹ��->������Ա
	printf("%s, %d\n", (&obj)->name, (&obj)->age);

	Teacher *p = NULL;
	p = &obj;
	printf("%s, %d\n", p->name, p->age); //����ָ����ָ����ڴ�
	printf("%s, %d\n", (*p).name, (*p).age); 


	printf("\n");
	system("pause");
	return 0;
}
