#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func(int a, int b)
{
	printf("a = %d, b = %d\n", a, b);
}


//�ȶ��庯��ָ�����ͣ��ٶ���ָ�����
int main(void)
{
	typedef void(*PARRAY)(int a, int b); //PARRAY�Ǻ���ָ������
	PARRAY p = NULL;
	p = func;
	p(1, 2);


	printf("\n");
	system("pause");
	return 0;
}


//ֱ�Ӷ��庯��ָ�����
int main02(void)
{
	void(*p)(int a, int b) = NULL;
	p = func;
	p(1, 2);


	printf("\n");
	system("pause");
	return 0;
}


//�ȶ�����ͨ�������ͣ��ٶ���ָ�����
int main01(void)
{
	typedef void FUNC(int, int); //FUNC��ͨ��������
	FUNC *p = NULL;
	p = func;
	//p = &func;
	//p = *func;
	p(1, 2); //ͨ������ָ��������ã���ӵ��ú���
	//(*p)(2, 3);
	printf("%p, %p, %p\n", p, *p, &p); //p��&p��һ��


	printf("\n");
	system("pause");
	return 0;
}
