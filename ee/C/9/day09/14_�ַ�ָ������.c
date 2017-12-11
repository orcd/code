/* ************************************************************************
 *       Filename:  14_字符指针数组.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 16时33分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

//tmp 保存 {"./a.out", "mike", "sb"} 首元素地址
//n 代表数组元素个数
//void func(char **tmp, int n)
void func(char *tmp[], int n)
{
	int i = 0;
	for(i = 0; i < n; ++i)
	{
		printf("tmp[%d] = %s\n", i, tmp[i]);
	}
}

int main()
{
	char * p[] = {"./a.out", "mike", "sb"};
	int n = sizeof(p)/sizeof(*p);

	//func(p, n);
	func(&p[0], n);//实参为char *, 需要char **保存它的地址


	return 0;
}

int main02()
{
	//指针数组，它是数组，每个元素都是char *
	//没有保存字符内容，保存地址，  p[0], p[1], p[2]
	char * p[] = {"./a.out", "mike", "sb"};
	int n = sizeof(p)/sizeof(*p);
	//定义一个指针，指向首元素，首元素是char *, 需要char **
	char ** tmp = &p[0]; //&p[0] 就是p

	int i = 0;
	for(i = 0; i < n; ++i)
	{
		//printf("p[%d] = %s\n", i, *(tmp+i));
		printf("p[%d] = %s\n", i, tmp[i]);
	}



	return 0;
}

int main01()
{
	char * p1 = "./a.out";
	char * p2 = "mike";
	char * p3 = "250";
	char * p4 = "sb";

	return 0;
}


