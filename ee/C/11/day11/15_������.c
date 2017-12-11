/* ************************************************************************
 *       Filename:  15_共用体.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 16时06分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

struct A
{
	unsigned char a;
	unsigned short b;
	unsigned int c;
};

union B
{
	unsigned char a;
	unsigned short b;
	unsigned int c;
};

int main()
{
	//1、结构体大小为所有成员相加，联合体大小为最大成员的大小
	printf("%lu, %lu\n", sizeof(struct A), sizeof(union B));
	//2、结构体成员的地址都不一样，联合体成员首地址一样，因为它们共用一块内存
	struct A s1;
	union B s2;
	printf("A: %p, %p, %p\n", &s1.a, &s1.b, &s1.c);
	printf("B: %p, %p, %p\n", &s2.a, &s2.b, &s2.c);
	//3、结构体每个成员独立的，改变某个成员相互不会影响
	//   联合体共用一块内存，改变某个成员会影响另外一个成员
	s2.c = 0x11223344;
	printf("%x, %x, %x\n", s2.a, s2.b, s2.c);
	s2.a = 0xaa;
	printf("%x, %x, %x\n", s2.a, s2.b, s2.c);


	return 0;
}


