#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����һ������ָ������
typedef int (*PFUC)(int, int);
typedef struct Test
{
	PFUC func; //PFUC�Ǻ���ָ�����ͣ� func�Ǳ���
}Test;

void set_func(Test *obj, PFUC tmp)
{
	obj->func = tmp;
}
int my_add(int a, int b)
{
	return a + b;
}

int main(void)
{
	//����һ���ṹ�����
	Test obj;
	set_func(&obj, my_add); // obj.func = my_add
	int r = obj.func(2, 1);
	printf("r = %d\n", r);


	printf("\n");
	system("pause");
	return 0;
}
