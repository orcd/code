#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//ֻҪ��һ��[]�����ֿ��Բ�д����������д
//void func01(int a[3][4]) //�β��е�������ָ�����
//void func01(int a[][4])
void func01(int (*a)[4])
{

}

//ʵ��Ϊ��Ԫ�ص�ַ����Ԫ��Ϊint [4][5]
void func02(int(*p)[4][5])
{

}

int main(void)
{
	int a[3][4];
	func01(a);

	int b[3][4][5];
	func02(b);


	printf("\n");
	system("pause");
	return 0;
}
