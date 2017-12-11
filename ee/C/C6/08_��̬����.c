#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _Node //���
{
	char data[50]; //������
	struct _Node * next; 	//ָ����
	struct _Node * pre;
}Node;

int main(void)
{
	//������ͷ��㣬���ͷ���ֻ����Ϊ��־λ��û�б�����Ч������
	Node *head = (Node *)malloc(sizeof(Node));
	Node *n1 = (Node *)malloc(sizeof(Node)); //��Ч�ڵ�ĵ�һ���ڵ㣬�׽ڵ�
	Node *n2 = (Node *)malloc(sizeof(Node));
	Node *n3 = (Node *)malloc(sizeof(Node));
	Node *n4 = (Node *)malloc(sizeof(Node));
	strcpy(n1->data, "��");
	strcpy(n2->data, "ϲ");
	strcpy(n3->data, "��");
	strcpy(n4->data, "��");

	head->next = n1;
	n1->next = n2; 	//��㽨����ϵ
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL; //β���

	//������ӡÿ������������
	Node *tmp = head->next;
	while (tmp != NULL)
	{
		printf("%s -> ", tmp->data);
		tmp = tmp->next; //��������ƶ�
	}
	printf("NULL\n");

	//�ͷ����еĽ�㣬�ͷ�ĳ�����ǰ����Ҫ������һ�����
	tmp = head;
	Node * del = head; //��ǰ��Ҫɾ���Ľ��
	while (tmp != NULL)
	{
		tmp = tmp->next; //��������ƶ���������һ�����
		free(del); //ɾ����ǰ�Ľ�㣬�����tmp, Ϊ��һ�����
		del = tmp; //��һ����Ҫɾ���Ľ��
	}


	printf("\n");
	system("pause");
	return 0;
}
