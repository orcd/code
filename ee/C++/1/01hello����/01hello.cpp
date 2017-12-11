#define _CRT_SECURE_NO_WARNINGS//
#include<iostream>//引入头文件
using namespace std;//标准命名空间
//using --关键字
//namespace 
//std 是名字
int main()
{
	//printf
	cout << "hello world!" << endl;
	/*int a = 10;
	cout << "a=" << a << endl;*/
	//cout是标准输出流
	//endl是刷新缓冲区，并换行

	//标准输入流,类似于scanf
	int b;
	cin >> b;

	cout << "b=" << b << endl;
	system("pause");
	return EXIT_SUCCESS;
}

