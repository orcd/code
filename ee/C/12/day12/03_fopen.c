/* ************************************************************************
 *       Filename:  03_fopen.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 10时30分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	FILE * fp = NULL;

	//"r": 只读，文件不存在，打开失败，返回NULL
	//"w": 只写，文件存在，清空内容，文件不存在，新建
	//"a": 追加方式，文件存在，光标放在结尾，文件不存在，新建
	fp = fopen("./3.txt", "w");
	if(NULL == fp)
	{
		//打印上一次库函数调用失败的原因
		perror("fopen");
		return -1;
	}

	fclose(fp);
	fp = NULL;

	return 0;
}


