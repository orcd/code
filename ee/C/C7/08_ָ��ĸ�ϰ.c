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

int main(void)
{
	void * p;

	//1、通过一个函数给p动态分配空间
	get_mem(&p);

	//2、给buf设置内容，拷贝的方式
	char str[] = "hello abc";
	int len = strlen(str);
	set_buf(p, str, len);

	//3、取结构体中buf的内容
	char tmp[100] = { 0 };
	get_buf(p, tmp, &len);
	printf("tmp = %s, len = %d\n", tmp, len);

	//4、释放堆区的空间
	free_mem(p);
	p = NULL;


	printf("\n");
	system("pause");
	return 0;
}
