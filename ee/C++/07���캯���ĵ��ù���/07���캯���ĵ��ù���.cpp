#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1.如果用户提供有参构造，那么编译器不会提供默认的构造函数,
//但是会提供默认的拷贝构造函数
//2.如果用户提供了拷贝构造函数，那么编译器不会在提供任何构造函数
class Maker{
public:

	/*Maker(int age)
	{
		Age = age;
	}*/

	Maker(const Maker &maker)
	{

	}

private:
	int Age;
};

void test()
{
	/*Maker maker3;
	Maker maker(10);
	Maker maker2(maker);*/
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

