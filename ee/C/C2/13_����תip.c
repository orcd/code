#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//int a = 2130706433;
	int a = 0x7f000001;
	unsigned char * p = (unsigned char *)&a;
	//printf("%d.%d.%d.%d\n", p[0], p[1], p[2], p[3]);
	//printf("%d.%d.%d.%d\n", p[3], p[2], p[1], p[0]);

	char ip[50];
	sprintf(ip, "%d.%d.%d.%d\n", p[3], p[2], p[1], p[0]);
	printf("ip  = %s\n", ip);


	printf("\n");
	system("pause");
	return 0;
}
