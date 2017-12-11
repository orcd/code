#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class BMW{
public:
	BMW(int a)
	{
		cout << " a BMW 构造" << endl;
	}

	~BMW()
	{
		cout << "BMW 析构" << endl;
	}
};

class Trator{
public:
	Trator(int b,int c)
	{
		cout << "Trator 构造" << endl;
	}
	~Trator()
	{
		cout << "Trator 析构" << endl;
	}
};

//创建对象时，先调用类的成员对象的构造函数，然后在调用自己的构造函数，析构函数调用顺反之
//掉用成员对象的构造函数时，和成员对象的顺序有关

class Maker{
public:
	//Maker() :b(10),t(20,30)//初识化列表
	//{
	//	cout << "Maker 构造" << endl;
	//}

	Maker(int a,int b,int c) :b(a), t(b, c)//初识化列表
	{
		cout << "Maker 构造" << endl;
	}

	~Maker()
	{
		cout << "Maker 析构" << endl;
	}

private:
	
	BMW b;
	Trator t;//对象做类的成员

};

void test01()
{
	Maker maker(10,20,30);
}

//初始化列表是做什么
//用来确定成员对象调用类（实例化成员对象的类）的哪个构造函数

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

