#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#include "deal_file.h"

void help() //����
{
	printf("===============================\n");
	printf("1 �����ļ�\n");
	printf("2 �����ļ�\n");
	printf("3 ����\n");
	printf("4 �˳�\n");
	printf("===============================\n");
}

void enc_file_menu() //�����ļ�
{
	char path1[128], path2[128];
	int ret;
	printf("��������Ҫ���ܵ��ļ���");
	scanf("%s", path1);
	printf("��������ܺ���ļ���");
	scanf("%s", path2);

	ret = deal_enc_file(path1, path2);
	if (ret != 0)
	{
		printf("%s����ʧ��: %d\n", path1, ret);
	}
	else
	{
		printf("%s���ܳɹ��� ���ܺ���ļ�Ϊ %s\n", path1, path2);
	}

}
void des_file_menu()//�����ļ�
{
	char path1[128], path2[128];
	int ret;
	printf("��������Ҫ���ܵ��ļ���");
	scanf("%s", path1);
	printf("��������ܺ���ļ���");
	scanf("%s", path2);

	ret = deal_des_file(path1, path2);
	if (ret != 0)
	{
		printf("%s����ʧ��: %d\n", path1, ret);
	}
	else
	{
		printf("%s���ܳɹ��� ���ܺ���ļ�Ϊ %s\n", path1, path2);
	}
}

void my_clear() //����
{
	system("cls");
}

void my_exit()//�˳�
{
	exit(-1);
}
