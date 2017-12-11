#include <string.h>
#include <time.h> 
#include <stdlib.h>
#include <stdio.h>

#include "dict.h"

int main()
{
	Dict * p = NULL; //指针变量
	int n; //代表真正单词个数
	clock_t start, end;
	

	//所有内容都在堆区
	start = clock();
	n = init_dict( &p , "./dict.txt"); //地址传递
	end = clock();
	printf("n = %d\n", n);
	if(0 == n)
	{
		printf("n == 0, err\n");
		return -1;
	}
	printf("加载时间： %lu ms\n", (end-start)/1000); //linux需要除以1000， windows不需要

	start = clock();
	char key[1024] = "鼾声如雷";
	char content[2048];
	int ret = search_dict(p, n, key, content); //查询，成功为0，失败为-1
	if(0 == ret)
	{
		printf("%s ------》  %s\n", key, content);
	}
	else
	{
		printf("没有此词汇\n");
	}
	end = clock();
	printf("查询时间： %lu ms\n", (end-start)/1000); //linux需要除以1000， windows不需要


	start = clock();
	clean_dict( p, n); //释放堆区的内存
	p = NULL;
	end = clock();
	printf("清理时间： %lu ms\n", (end-start)/1000); //linux需要除以1000， windows不需要

	return 0;
}
