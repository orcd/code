#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#define CTGPATH "./cfg.ini"

void  help()//����
{
	printf("===============================\n");
	printf("1 д�����ļ�\n");
	printf("2 �������ļ�\n");
	printf("3 ����\n");
	printf("4 �˳�\n");
	printf("===============================\n");
}

void write_file_menu()//д�����ļ�
{
	char key[128];
	char value[256];
	int ret;
	printf("������key: ");
	scanf("%s", key);
	printf("������value: ");
	scanf("%s", value);

	ret = write_cfg(CTGPATH, key, value);
	if (ret != 0)
	{
		printf("[%s = %s]д�����ļ�ʧ��: %d\n", key, value, ret);
	}
	else
	{
		printf("[%s = %s]д�����ļ��ɹ�\n", key, value);
	}
}

void read_file_menu()//�������ļ�
{
	char key[128];
	char value[256];
	int ret;
	printf("������key: ");
	scanf("%s", key);

	ret = read_cfg(CTGPATH, key, value);
	if (ret != 0)
	{
		printf("�������ļ�ʧ��: %d\n", ret);
	}
	else
	{
		printf("%s ��Ӧ��ֵΪ %s\n", key, value);
	}
}

void my_clear() //����
{
	system("cls");
}

void my_exit()//�˳�
{
	exit(0);
}