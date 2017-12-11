/* ************************************************************************
 *       Filename:  04_标准设备文件.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 10时59分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	/*  
	//往标准输出文件(屏幕)， 写内容
	fclose(stdout);
	printf("hello mike\n");

	fclose(stderr);
	perror("test");
	*/

	int a = 10;
	fclose(stdin);
	scanf("%d", &a);
	printf("a = %d\n", a);

	return 0;
}


