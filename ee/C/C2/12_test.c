#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char str[4] = { 0xdd, 0xcc, 0xbb, 0xaa };
	int * p = (int *)&str[0];
	printf("%x\n", *p);

	unsigned short  * p1 = (unsigned short *)&str[0];
	printf("%x\n", *p1);

	unsigned char  * p2 = (unsigned char *)&str[0];
	printf("%x\n", *p2);

	unsigned short  * p3 = (unsigned short *)&str[1];
	printf("%x\n", *p3);


	printf("\n");
	system("pause");
	return 0;
}
