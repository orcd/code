#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1��ָ������Ҳ��һ�����ͣ���int���ͱ�����һ��
//2��ָ�����Ҳ��һ�ֱ������Ǳ������ܱ�����
//3��p��*p������: pָp���ڴ棬*p����p���ڴ棬p��ָ����ڴ�
int main(void)
{
	int  p1;
	p1 = 111;
	int * p2 = &p1;
	*p2 = 222;
	printf("%d, %d, %d\n", p1, *p2, p2);

	printf("\n");
	system("pause");
	return 0;
}

int main03(void)
{
	int ************ p1;
	p1 = 111;
	int ************ * p2 = &p1;
	*p2 = 222;
	printf("%d, %d, %d\n", p1, *p2, p2);

	printf("\n");
	system("pause");
	return 0;
}


int main02()
{
	int p;
	p = 10;
	printf("p = %d\n", p); //����10
	printf("*p = %d\n", *(int *)p);//err, ����Ұָ����ָ����ڴ�

	return 0;
}

int main01(void)
{
	//1��ָ������Ҳ��һ�����ͣ���int���ͱ�����һ��
	//2��ָ�����Ҳ��һ�ֱ������Ǳ������ܱ�����
	//3��p��*p������: pָp���ڴ棬*p����p���ڴ棬p��ָ����ڴ�
	int ************** p;
	p = (int **************)10;
	printf("p = %d\n", p); //����10
	printf("*p = %d\n", *p); //err, ����Ұָ����ָ����ڴ�


	printf("\n");
	system("pause");
	return 0;
}
