#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "des.h" //����ͷ�ļ�
int main(void)
{
	unsigned char src[] = "hello mike"; 	//����
	int src_len = strlen(src);
	unsigned char dst[100] = { 0 }; 	//����
	int dst_len;
	int ret;

	ret = DesEnc(src, src_len, dst, &dst_len); //���ܹ���
	if (ret != 0)
	{
		printf("ret = %d\n", ret);
		return ret;
	}
	printf("dst = %s\n", dst);

	memset(src, 0, sizeof(src));
	src_len = 0;
	ret = DesDec(dst, dst_len, src, &src_len); //����
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
