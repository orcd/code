#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _Node //���
{
	//������
	char data[50];

	//ָ����
	struct _Node * next;
}Node;

int main(void)
{
	Node n1 = {"��"};
	Node n2 = { "ϲ" };
	Node n3 = { "��" };
	Node n4 = { "��" };

	//��㽨����ϵ
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = NULL; //β���

	//������ӡÿ������������
	Node *tmp = &n1;
	while (tmp != NULL)
	{
		printf("%s -> ", tmp->data); 
		tmp = tmp->next; //��������ƶ�
	}
	printf("NULL\n");


	printf("\n");
	system("pause");
	return 0;
}
