#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stddef.h> //offsetof

//1���׳�Ա�ŵ͵�ַ��β��Ա�Ÿߵ�ַ������������
//2���׳�Ա����ƫ����Ϊ0��λ��
typedef struct Teacher
{
	char name[10];  //12
	int age;				  //4
	int score;           //4
} Teacher;

int main(void)
{
	//��һ������Ϊ�ṹ�����ͣ�
	//�ڶ�������Ϊ��Ա������
	int n =  offsetof(Teacher, age);
	printf("n = %d\n", n);

	printf("%d\n", sizeof(Teacher));

	Teacher obj;
	Teacher *p = &obj;
	n = (int)&(p->age) - (int)p;
	printf("n2 = %d\n", n);


	printf("\n");
	system("pause");
	return 0;
}
