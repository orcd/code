#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node
{
	int id; //数据域
	struct Node *next; //指针域
}Node;

typedef void * LinkNode;

//循环创建节点，如果输入的数为负数，退出循环
//尾插法, 返回值为结构体指针类型
LinkNode CreateLinkTail()
{
	Node *head;
	Node *pnew;
	Node *ptail;

	//先创建头结点
	head = (Node *)malloc(sizeof(Node));
	head->next = NULL; //只有一个节点时，头结点也是尾结点
	ptail = head; //保存尾结点的位置

	int data;
	while (1)
	{
		printf("请输入id: ");
		scanf("%d", &data);
		if (data < 0)
		{
			break;
		}

		//新建结点
		pnew = (Node *)malloc(sizeof(Node));
		//成员变量赋值
		pnew->id = data;

		//结点建立关系
		ptail->next = pnew; //尾结点的下一个结点时新结点
		pnew->next = NULL; //新结点作为尾结点
		ptail = pnew; //保存尾结点的位置
	}
	return head;
}

//头插法, 返回值为结构体指针类型
LinkNode CreateLinkHead()
{
	Node *head;
	Node *pnew;

	//先创建头结点
	head = (Node *)malloc(sizeof(Node));
	head->next = NULL; //只有一个节点时，头结点也是尾结点

	int data;
	while (1)
	{
		printf("请输入id: ");
		scanf("%d", &data);
		if (data < 0)
		{
			break;
		}

		//新建结点
		pnew = (Node *)malloc(sizeof(Node));
		//成员变量赋值
		pnew->id = data;

		pnew->next = head->next; //新结点的下一个结点为头结点的下一个结点
		head->next = pnew; //头结点的下一个结点为新结点
	}

	return head;
}

void PrintNode(LinkNode p)
{
	Node *head = (Node *)p;
	Node * tmp = head->next;
	printf("head -> ");
	while (tmp != NULL)
	{
		printf("%d -> ", tmp->id);
		tmp = tmp->next; //结点往后移动
	}
	printf("NULL\n");
}

//在某个数的前面插入新节点，如果这个数不存在，就在尾部插入新节点
void InsertNode(LinkNode p, int x, int y)
{
	Node *head = (Node *)p;

	if (head == NULL)
	{
		printf("head == NULL\n");
		return;
	}

	Node *pre;
	Node *pcur;
	Node *pnew;

	//2者相差一个结点，pre靠前
	pre = head;
	pcur = head->next;

	while (pcur != NULL)
	{
		if (pcur->id == x)
		{
			break;
		}
		//结点各自往后移动一个位置
		pre = pre->next;
		pcur = pcur->next;
	}

	//新建结点
	pnew = (Node *)malloc(sizeof(Node));
	pnew->id = y;

	//结点建立关系
	pre->next = pnew;
	pnew->next = pcur;
}

//删除第一个节点值为x的结点
void DelNode(LinkNode p, int x)
{
	Node *head = (Node *)p;

	if (head == NULL)
	{
		printf("head == NULL\n");
		return;
	}

	Node *pre;
	Node *pcur;
	int flag = 0; //0没有找到， 1找到

	//2者相差一个结点，pre靠前
	pre = head;
	pcur = head->next;

	while (pcur != NULL)
	{
		if (pcur->id == x)
		{
			pre->next = pcur->next;
			free(pcur);
			flag = 1;

			break;
		}
		//结点各自往后移动一个位置
		pre = pre->next;
		pcur = pcur->next;
	}

	if (0 == flag)
	{//没有这个节点
		printf("没有值为%d的结点\n", x);
	}
}

void DestroyLink(LinkNode p)
{
	Node *head = (Node *)p;

	Node *tmp = head;
	Node *del = head;

	while (tmp != NULL)
	{
		//释放前先保存下一个结点
		tmp = tmp->next;
		free(del); //释放当前节点，tmp的上一个结点
		del = tmp; //保存下一个需要释放的结点
	}
}

int main(void)
{
	LinkNode head = NULL;
	head = CreateLinkTail(); //尾插法创建链表
	//head = CreateLinkHead(); //头插法创建链表
	PrintNode(head); //遍历打印所有的结点

	//在某个数的前面插入新节点，如果这个数不存在，就在尾部插入新节点
	InsertNode(head, 5, 4); //在5的前面插入4
	PrintNode(head); //遍历打印所有的结点

	DelNode(head, 5); //删除第一个节点值为5的结点
	PrintNode(head); //遍历打印所有的结点

	DestroyLink(head); //释放所有的结点
	head = NULL;

	printf("\n");
	system("pause");
	return 0;
}
