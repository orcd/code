/* ************************************************************************
 *       Filename:  11_万能指针.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 14时42分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	//void，无返回值， 无参数函数修饰
	//void a; //err, void是无类型，无法确定真正的类型
	void * p; //ok, 指针的大小是固定，和编译器有关
	int a = 10;
	p = &a;
	//间接操作内存：1)首地址 2)长度(步长)
	printf("%d\n", *(int *)p);

	char ch = 'a';
	p = &ch;
	printf("%c\n", *(char *)p);

	return 0;
}


