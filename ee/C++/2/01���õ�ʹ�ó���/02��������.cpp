#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

void test()
{
	int a = 10;
	int &ret = a;
	ret = 20;

	//int &ret1 = 10;报错
	const int &ret1 = 10;//int temp=10;const int &ret1=temp

	//ret1 = 300;报错

}

//如果不想别人改引用指向的空间值，可以定义为常引用
void func(const int &a)
{
	cout << "a=" << a << endl;

	//a = 20;
}

struct Maker{
	Maker()//构造函数
	{
		name = "悟空";
		age = 22;
	}
	string name;
	int age;

};

void printMaker(const Maker &maker)//const int &a
{

	cout << "Name:" << maker.name << " Age:" << maker.age << endl;
}

//函数当左值，函数必须返回引用
int& myfunc()
{
	static int a = 10;

	printf("%d\n",a);


	return a;
}

int myfunc2()
{
	int a = 20;
	return a;
}

void test02()
{
	int ret = myfunc2();

	//如果函数返回的是值，只能用值来接，不能用引用

	//int &ret = myfunc2();报错
	//inr &ret=20;
}
void test01()
{
	myfunc();
	myfunc() = 100;
	myfunc();
}


int main()
{
	/*int a1 = 10;
	func(a1);

	cout << "a1=" << a1 << endl;*/

	test01();
	system("pause");
	return EXIT_SUCCESS;
}

