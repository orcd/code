#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//3)�ȶ�������ָ�����ͣ����������ٶ���ָ�����(����)
	typedef int(*PARRAY)[10]; //PARRAY�����ͣ�����ָ�����ͣ� �ȼ���1)��ARRAY *
	PARRAY p = NULL;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	p = &a;

	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		//p[i]====>*(p+i)===> *(&a+i)  err, �Ѿ�Խ��
		// ((*p)+i) ===>  *&a + i ====> 
		printf("%d, %d, %d\n", ((*p) + i), a + i, &a[i]);
		printf("%d, %d,  %d, %d\n", *((*p) + i), (*p)[i], *(a + i), a[i]);

	}

	printf("\n");
	system("pause");
	return 0;
}


int main03(void)
{
	//2) ֱ�Ӷ�������ָ�����(����)
	int(*p)[10] = NULL;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	p = &a;

	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		//p[i]====>*(p+i)===> *(&a+i)  err, �Ѿ�Խ��
		// ((*p)+i) ===>  *&a + i ====> 
		printf("%d, %d, %d\n", ((*p) + i), a + i, &a[i]);
		printf("%d, %d,  %d, %d\n", *((*p) + i), (*p)[i], *(a + i), a[i]);

	}

	printf("\n");
	system("pause");
	return 0;
}


int main02(void)
{
	//����һ����������
	typedef int ARRAY[10];
	//ARRAY a; //���鳣���� a����������
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	ARRAY *p; //p����ָ�����������ָ�����

	//����a��&a��ֵһ����
	//����	1	warning C4047: ��=��:��ARRAY (*)���롰int *���ļ�Ӽ���ͬ	
	//a����Ԫ�ص�ַ����Ԫ����int, a����int *
	//p = a;
	p = &a; //pָ��a�������, pָ��ARRAY, ARRAY ��int [10]
	printf("%p, %p\n", p, *p);

	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		//p[i]====>*(p+i)===> *(&a+i)  err, �Ѿ�Խ��
		// ((*p)+i) ===>  *&a + i ====> 
		printf("%d, %d, %d\n", ((*p)+i), a+i, &a[i]); 
		printf("%d, %d,  %d, %d\n", *((*p) + i), (*p)[i], *(a + i), a[i]);

	}

	printf("p = %p, &p = %p\n", p, &p);



	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	//ָ�����飬ָ������飬�������飬ÿ��Ԫ�ض���ָ������
	char *a[10];
	//����ָ�룬����ָ�룬ָ�����������ָ��


	printf("\n");
	system("pause");
	return 0;
}
