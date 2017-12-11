#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Father{
public:
	Father()
	{
		mA = 100;
	}
	void func()
	{
		cout << "Father::func" << endl;
	}
	void func(int a)
	{
		cout << "Father::func int a" << endl;
	}
	void func(int a,int b)
	{
		cout << "Father::func int a,int b" << endl;
	}
public:
	int mA;
};

class Son :public Father{
public:
	Son()
	{
		mA = 200;
	}
	void func()
	{
		cout << "SON func" << endl;
	}
public:
	int mA;
};

//1.当子类的成员和父类的成员同名时，父类的成员会被隐藏，可以通过作用域来访问
//2.当子类成员函数和父类的成员函数同名，而且父类的成员函数是重载，那么父类重载的函数都会被隐藏


void test()
{
	
	Son son;
	//就近原则
	cout<<son.mA << endl;


	cout << son.Father::mA << endl;

	son.func();

	//son.func(10);
	//son.func(10, 20);
	son.Father::func();
	son.Father::func(10);

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

