#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#include "deal_file.h"

void help() //帮助
{
	printf("===============================\n");
	printf("1 加密文件\n");
	printf("2 解密文件\n");
	printf("3 清屏\n");
	printf("4 退出\n");
	printf("===============================\n");
}

void enc_file_menu() //加密文件
{
	char path1[128], path2[128];
	int ret;
	printf("请输入需要加密的文件：");
	scanf("%s", path1);
	printf("请输入加密后的文件：");
	scanf("%s", path2);

	ret = deal_enc_file(path1, path2);
	if (ret != 0)
	{
		printf("%s加密失败: %d\n", path1, ret);
	}
	else
	{
		printf("%s加密成功， 加密后的文件为 %s\n", path1, path2);
	}

}
void des_file_menu()//解密文件
{
	char path1[128], path2[128];
	int ret;
	printf("请输入需要解密的文件：");
	scanf("%s", path1);
	printf("请输入解密后的文件：");
	scanf("%s", path2);

	ret = deal_des_file(path1, path2);
	if (ret != 0)
	{
		printf("%s解密失败: %d\n", path1, ret);
	}
	else
	{
		printf("%s解密成功， 解密后的文件为 %s\n", path1, path2);
	}
}

void my_clear() //清屏
{
	system("cls");
}

void my_exit()//退出
{
	exit(-1);
}
