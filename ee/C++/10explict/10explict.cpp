#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	
	//explicit只能写在构造函数前面，单个形参，或第二个形参有默认值
	explicit Maker(int a)
	{

	}
	Maker(const Maker &maker){}

};

void test()
{
	//Maker maker = 10;
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

