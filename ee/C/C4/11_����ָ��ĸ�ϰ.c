#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char ** tmp;
	int n = 3;
	tmp = (char **)malloc(n * sizeof(char *));

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		tmp[i] = (char *)malloc(10 * sizeof(char));
		sprintf(tmp[i], "name%d%d%d", i, i, i); //���Ǹ�tmp[i]��ֵ����tmp[i]��ָ����ڴ渳ֵ
		printf("%s\n", tmp[i]);
	}

	for (i = 0; i < n; ++i)
	{
		free(tmp[i]);
	}

	free(tmp);
	tmp = NULL;



	printf("\n");
	system("pause");
	return 0;
}