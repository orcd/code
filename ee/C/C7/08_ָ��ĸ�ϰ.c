#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct  Handle
{
	char *buf;
	int len;
}HD;

void get_mem(void ** p)
{
	HD * tmp;
	tmp = (HD *)malloc(sizeof(HD)); //HD *ָ��HD
	memset(tmp, 0, sizeof(HD));

	*p = (void *)tmp; //��Ӹ�ֵ
}

void set_buf(void *tmp, char *str, int n)
{
	HD *p = (HD *)tmp;
	p->len = n;
	p->buf = (char *)malloc(n + 1); //+1, Ϊ�˷�'\0'
	strcpy(p->buf, str);
}

void get_buf(void *p1, char *tmp, int *n)
{
	HD *p = (HD *)p1;
	strcpy(tmp, p->buf);
	*n = p->len;
}

void free_mem(void *tmp)
{
	HD *p = (HD *)tmp;

	free(p->buf);
	free(p);
}

int main(void)
{
	void * p;

	//1��ͨ��һ��������p��̬����ռ�
	get_mem(&p);

	//2����buf�������ݣ������ķ�ʽ
	char str[] = "hello abc";
	int len = strlen(str);
	set_buf(p, str, len);

	//3��ȡ�ṹ����buf������
	char tmp[100] = { 0 };
	get_buf(p, tmp, &len);
	printf("tmp = %s, len = %d\n", tmp, len);

	//4���ͷŶ����Ŀռ�
	free_mem(p);
	p = NULL;


	printf("\n");
	system("pause");
	return 0;
}
