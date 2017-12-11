#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker()
	{
		cout << "无参" << endl;
	}
	Maker(int a )
	{
		m = a;
		cout << "有参" << endl;
	}

	Maker( const Maker &maker)
	{
		
		cout << "拷贝构造" << endl;
	}
	~Maker()
	{
		cout << "析构函数" << endl;
	}

public:

	int m;
};

//1.以值方式给函数做形参
void dolong(Maker maker)
{

}


void test01()
{
	Maker maker;
	dolong(maker);
}
//用已有的对象去初始化另一个对象
void test02()
{
	Maker maker;

	Maker maker2(maker);
}

//函数局部对象以值传递的方式,VS下release模式下不调用拷贝构造，debug模式下调用一次
Maker func()
{
	//1.局部对象
	Maker maker;

	//2.打印对象地址
	//cout << "maker=" << &maker << endl;


	return maker;
}



void test03()
{
	 Maker maker=func();
	
	/*Maker maker
	maker = func();*/

	//cout << "maker1=" << &maker1 << endl;
}


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

