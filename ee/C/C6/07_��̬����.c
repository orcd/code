#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _Node //结点
{
	//数据域
	char data[50];

	//指针域
	struct _Node * next;
}Node;

int main(void)
{
	Node n1 = {"恭"};
	Node n2 = { "喜" };
	Node n3 = { "发" };
	Node n4 = { "财" };

	//结点建立关系
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = NULL; //尾结点

	//遍历打印每个结点的数据域
	Node *tmp = &n1;
	while (tmp != NULL)
	{
		printf("%s -> ", tmp->data); 
		tmp = tmp->next; //结点往后移动
	}
	printf("NULL\n");


	printf("\n");
	system("pause");
	return 0;
}
