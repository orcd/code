#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//typedef struct Test
//{
//	int a;			//��ͨ�����Ķ���
//	void(*pfunc)(int, int); //����ָ������Ķ��壬���Ǻ�������
//}Test;

//����һ������ָ������
typedef void(*PFUNC)(int, int);

typedef struct Test
{
	int a;			//��ͨ�����Ķ���
	PFUNC pfunc; //����ָ������Ķ��壬���Ǻ�������
}Test;

void my_func(int x, int y)
{
	printf("x = %d, y = %d\n", x, y);
}

int main(void)
{
	//����ṹ�����
	Test obj;
	obj.a = 111;
	obj.pfunc = my_func;

	obj.pfunc(10, 20); //my_func(10, 20)


	printf("\n");
	system("pause");
	return 0;
}
