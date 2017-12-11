#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "menu.h" //头文件包含

int main(void)
{
	int cmd;
	while (1)
	{
		help();
		printf("cmd: ");
		scanf("%d", &cmd);

		switch (cmd)
		{
		case 1:
			enc_file_menu(); //加密文件
			break;
		case 2:
			des_file_menu(); //解密文件
			break;
		case 3:
			my_clear(); //清屏
			break;
		default:
			my_exit(); //退出
			break;
		}

	}


	printf("\n");
	system("pause");
	return 0;
}
