#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main01(void)
{
	char buf[100];
	buf[0] = '\0';
	strcat(buf, "hello");
	printf("buf = %s\n", buf);

	printf("\n");
	system("pause");
	return 0;
}

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
			write_file_menu(); //д�����ļ�
			break;
		case 2:
			read_file_menu(); //�������ļ�
			break;
		case 3:
			my_clear(); //����
			break;
		default:
			my_exit(); //�˳�
			break;
		}

	}


	printf("\n");
	system("pause");
	return 0;
}
