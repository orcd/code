#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	unsigned int a = 0xaabbccdd;

	void * p = &a;
	printf("%x\n", *(int *)p); //aabbccdd
	printf("%x\n", *(unsigned short *)p); //ccdd
	printf("%x\n", *(    (unsigned short *)p  +   1)  ); //aabb
	printf("%x\n", *(unsigned char *)p); //dd
	//第0个元素代表低地址，如果打印dd, 说明低位放低地址，小端
	printf("%x\n", ( (unsigned char *) p) [0]);
	printf("%x\n", ((unsigned char *)p)[1]);
	printf("%x\n", ((unsigned char *)p)[2]);
	printf("%x\n", ((unsigned char *)p)[3]);

	unsigned char* p1 = (unsigned char*)&a;
	printf("%x, %x, %x, %x\n", *p1, *(p1+1), p1[2], p1[3]);


	printf("\n");
	system("pause");
	return 0;
}
