#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#define CTGPATH "./cfg.ini"

void  help()//帮助
{
	printf("===============================\n");
	printf("1 写配置文件\n");
	printf("2 读配置文件\n");
	printf("3 清屏\n");
	printf("4 退出\n");
	printf("===============================\n");
}

void write_file_menu()//写配置文件
{
	char key[128];
	char value[256];
	int ret;
	printf("请输入key: ");
	scanf("%s", key);
	printf("请输入value: ");
	scanf("%s", value);

	ret = write_cfg(CTGPATH, key, value);
	if (ret != 0)
	{
		printf("[%s = %s]写配置文件失败: %d\n", key, value, ret);
	}
	else
	{
		printf("[%s = %s]写配置文件成功\n", key, value);
	}
}

void read_file_menu()//读配置文件
{
	char key[128];
	char value[256];
	int ret;
	printf("请输入key: ");
	scanf("%s", key);

	ret = read_cfg(CTGPATH, key, value);
	if (ret != 0)
	{
		printf("读配置文件失败: %d\n", ret);
	}
	else
	{
		printf("%s 对应的值为 %s\n", key, value);
	}
}

void my_clear() //清屏
{
	system("cls");
}

void my_exit()//退出
{
	exit(0);
}