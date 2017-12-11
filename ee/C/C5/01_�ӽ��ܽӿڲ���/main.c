#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "des.h" //包含头文件
int main(void)
{
	unsigned char src[] = "hello mike"; 	//明文
	int src_len = strlen(src);
	unsigned char dst[100] = { 0 }; 	//密文
	int dst_len;
	int ret;

	ret = DesEnc(src, src_len, dst, &dst_len); //加密过程
	if (ret != 0)
	{
		printf("ret = %d\n", ret);
		return ret;
	}
	printf("dst = %s\n", dst);

	memset(src, 0, sizeof(src));
	src_len = 0;
	ret = DesDec(dst, dst_len, src, &src_len); //解密
	if (ret != 0)
	{
		printf("ret = %d\n", ret);
		return ret;
	}
	printf("src = %s, len = %d\n", src, src_len);





	printf("\n");
	system("pause");
	return 0;
}
