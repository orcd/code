#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int func(int a)
{
	printf("func a = %d\n", a);
	return 0;
}

int test()
{
	return 0;
}

int main(void)
{
	//�������֣����Ǵ���������ڵ�ַ��������ַ����ַҲ��ָ�룬����ָ��
	printf("%p, %p, %p\n", func, &func, *func);

	func(1); //���㣬���
	(&func)(2);
	(*func)(3);

	if (test) //û��д(), ���ǵ��ú�����ֻ��ʹ�ú����ĵ�ַ�������ĵ�ַ��Ϊ0
	{
		printf("����Ϊ��\n");
	}


	printf("\n");
	system("pause");
	return 0;
}
