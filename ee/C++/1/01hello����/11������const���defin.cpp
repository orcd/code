#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1.不重视作用域 2.没有数据类型
#define MAX 100
const short max = 3;
void func(int a)
{
	cout << "func int" << endl;
}
void func(short b)
{
	cout << "func short" << endl;
}

void test01()
{
	const int a = 10;
	cout << MAX << endl;
}

void test02()
{
	
	//func((short)MAX);
	func(max);

	
}


namespace std1{
#define TEST 200
}

void test03()
{
	cout << TEST << endl;
}

int main()
{
	test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

