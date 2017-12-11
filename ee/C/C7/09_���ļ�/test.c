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
	tmp = (HD *)malloc(sizeof(HD)); //HD *指向HD
	memset(tmp, 0, sizeof(HD));

	*p = (void *)tmp; //间接赋值
}

void set_buf(void *tmp, char *str, int n)
{
	HD *p = (HD *)tmp;
	p->len = n;
	p->buf = (char *)malloc(n + 1); //+1, 为了放'\0'
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
