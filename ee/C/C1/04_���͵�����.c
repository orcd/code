#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1�����߱������������͵�������Ҫ������Ŀռ�
	//2���κ�һ�����������ݣ�������ĳ������
	//3�����Ͳ�һ�������²�����һ������������+1��仯�Ĵ�С
	
	int a[10];
	//a, �� &a�������Ͳ�һ��
	//a, ��Ԫ�ص�ַ����Ԫ����int, ��Ԫ�ص�ַ��int *, int * ָ��int, +1, +sizeof(int)
	//&a, ��������ĵ�ַ������������int [10], +1, +sizeof(int [10])
	printf("a = %d, &a = %d\n", a, &a);
	printf("a+1 = %d, &a+1 = %d\n", a+1, &a+1);

	int b;
	//char *ָ��char, +1, +sizeof(char)
	//int *ָ��int, +1, +sizeof(int)
	//�������������;����������ɸ�ֵ���ݾ���
	printf("%d, %d\n", (char *)&b, (int *)&b);
	printf("%d, %d\n", (char *)&b+1, (int *)&b+1);


	printf("\n");
	system("pause");
	return 0;
}
