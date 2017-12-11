#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 4 * 1024
#include "des.h"


int deal_enc_file(char *path1, char *path2)//加密文件
{
	int ret = 0;

	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	int len;
	int ret2;
	unsigned char buf[SIZE];
	unsigned char dst[SIZE*2];
	int dst_len;

	fp1 = fopen(path1, "rb"); //只读方式打开源文件
	if (NULL == fp1)
	{
		perror("fopen fp1");
		ret = -1;
		goto END;
	}

	fp2 = fopen(path2, "wb"); //只写方式打开目的文件
	if (NULL == fp2)
	{
		perror("fopen fp2");
		ret = -2;
		goto END;
	}

	while (1)//读多少，写多少
	{
		len = fread(buf, 1, sizeof(buf), fp1);
		if (len < SIZE) //最后一次，小于4k
		{
			ret2 = DesEnc(buf, len, dst, &dst_len); //小于4k数据加密
			if (ret2 != 0)
			{
				ret = -4;
				goto END;
			}
			fwrite(dst, 1, dst_len, fp2);

			break; //结束了
		}
		//都是4k大小的数据
		//写文件前，需要加密
		ret2 = DesEnc_raw(buf, len, dst, &dst_len);//等于4k数据加密
		if (ret2 != 0)
		{
			ret = -3;
			goto END;
		}
		fwrite(dst, 1, dst_len, fp2);
	}

END:
	if (NULL != fp1)
	{
		fclose(fp1);
	}

	if (NULL != fp2)
	{
		fclose(fp2);
	}

	return ret;
}

int deal_des_file(char *path1, char *path2)//解密文件
{
	int ret = 0;

	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	int len;
	int ret2;
	unsigned char buf[SIZE];
	unsigned char dst[SIZE * 2];
	int dst_len;

	fp1 = fopen(path1, "rb"); //只读方式打开源文件
	if (NULL == fp1)
	{
		perror("fopen fp1");
		ret = -1;
		goto END;
	}

	fp2 = fopen(path2, "wb"); //只写方式打开目的文件
	if (NULL == fp2)
	{
		perror("fopen fp2");
		ret = -2;
		goto END;
	}

	while (1)//读多少，写多少
	{
		len = fread(buf, 1, sizeof(buf), fp1);
		if (len < SIZE) //最后一次，小于4k
		{
			ret2 = DesDec(buf, len, dst, &dst_len); //小于4k数据解密
			if (ret2 != 0)
			{
				ret = -4;
				goto END;
			}
			fwrite(dst, 1, dst_len, fp2);

			break; //结束了
		}
		//都是4k大小的数据
		//写文件前，需要解密
		ret2 = DesDec_raw(buf, len, dst, &dst_len);//等于4k数据解密
		if (ret2 != 0)
		{
			ret = -3;
			goto END;
		}
		fwrite(dst, 1, dst_len, fp2);
	}

END:
	if (NULL != fp1)
	{
		fclose(fp1);
	}

	if (NULL != fp2)
	{
		fclose(fp2);
	}

	return ret;
}