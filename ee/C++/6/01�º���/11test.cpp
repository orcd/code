#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Father1{
public:
	Father1()
	{
		BMW = "宝马";
	}
public:
	string BMW;
};

class Father2{
public:
	Father2()
	{
		BMW = "宝马";
	}
	
public:
	string BMW;
};

//多继承
class Son :public Father1, public Father2{
public:
	Son()
	{
		POSC = "保时捷";
	}
public:
	string POSC;
};

void test()
{
	Son son;
	//son.BMW;//报错，有二义性
	cout << "son.Father1::BMW" << son.Father1::BMW << endl;
	cout << "son.Father2::BMW" << son.Father2::BMW << endl;
	
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

