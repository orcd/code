#ifndef _DEAL_FILE_H_
#define _DEAL_FILE_H_

extern int write_cfg(char *path, char *key, char *value); //写配置文件
extern int read_cfg(char *path, char *key, char *value); //读配置文件

#endif