#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1��ָ�벽���� +1��ı仯
	//2��ָ�벽�����������;�������ָ����ָ����ڴ�����������и�ֵ���ݾ���
	//3������һ���������϶�һ��������һ�������Ͳ�һ��һ��

	int a = 0;
	printf("%d, %d\n", a, a+1);

	char *p = NULL;
	printf("%d, %d\n", p, p+1);

	//int *, ����Ϊ4
	//char **�� char **ָ��char *, +1�� +sizeof(char *), +4
	//char *, char *ָ��char,  +1�� +sizeof(char), +1
	//int ***, int ***ָ��int **, +1, +sizeof(int **), +4
	//double *, double *ָ��double, +1, +sizeof(double), +8
	


	printf("\n");
	system("pause");
	return 0;
}
