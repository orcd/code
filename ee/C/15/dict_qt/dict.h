#ifndef _DICT_H
#define _DICT_H
#include <stdio.h> //FILE

typedef struct Dict
{
	char *key; //单词
	char *content; //解释
}Dict;

//char buf[] = "mike\r\n     \t     ";
extern void trim_key(char *buf);//把单词后面的无用字符去掉

int get_dict_size(FILE *fp);

//返回值为单词个数
int init_dict(Dict ** p, char *path);

void clean_dict(Dict *p, int n);

int search_dict(Dict * p, int n, char *key, char *content);

#endif
