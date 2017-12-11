/* ************************************************************************
 *       Filename:  12_memcpy.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 15时30分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <string.h>
#include <stdio.h>

int main()
{
	char src[] = "hello\0abc";
	char dst[100] = {0};

	strncpy(dst, src, sizeof(src));
	memcpy(dst, src, sizeof(src));
	printf("dst = %s\n", dst);
	printf("dst = %s\n", dst+strlen("hello")+1);

	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int b[10];
	memset(b, 1, sizeof(b));
	//memcpy(b, a, 10*sizeof(int));
	memcpy(b, a, sizeof(a)); //最后一个参数为拷贝内存的字节大小，不是元素个数
	int i = 0;
	for(i = 0; i < 10; ++i)
	{
		printf("%d, ", b[i]);
	}
	printf("\n");

	return 0;
}


