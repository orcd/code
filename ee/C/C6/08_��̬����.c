#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _Node //结点
{
	char data[50]; //数据域
	struct _Node * next; 	//指针域
	struct _Node * pre;
}Node;

int main(void)
{
	//单独的头结点，这个头结点只是作为标志位，没有保存有效的数据
	Node *head = (Node *)malloc(sizeof(Node));
	Node *n1 = (Node *)malloc(sizeof(Node)); //有效节点的第一个节点，首节点
	Node *n2 = (Node *)malloc(sizeof(Node));
	Node *n3 = (Node *)malloc(sizeof(Node));
	Node *n4 = (Node *)malloc(sizeof(Node));
	strcpy(n1->data, "恭");
	strcpy(n2->data, "喜");
	strcpy(n3->data, "发");
	strcpy(n4->data, "财");

	head->next = n1;
	n1->next = n2; 	//结点建立关系
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL; //尾结点

	//遍历打印每个结点的数据域
	Node *tmp = head->next;
	while (tmp != NULL)
	{
		printf("%s -> ", tmp->data);
		tmp = tmp->next; //结点往后移动
	}
	printf("NULL\n");

	//释放所有的结点，释放某个结点前，需要保存下一个结点
	tmp = head;
	Node * del = head; //当前需要删除的结点
	while (tmp != NULL)
	{
		tmp = tmp->next; //结点往后移动，保存下一个结点
		free(del); //删除当前的结点，相对于tmp, 为上一个结点
		del = tmp; //下一次需要删除的结点
	}


	printf("\n");
	system("pause");
	return 0;
}
