#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:

	//无参
	Maker()
	{
		cout << "无参构造" << endl;
		m = 100;
	}
	Maker(int M)
	{
		cout << "有参构造" << endl;
		m = M;
	}
	Maker(const Maker &maker)
	{
		m = maker.m;
		cout << "拷贝构造" << endl;
	}
	~Maker()
	{
		cout << "析构函数" << endl;
	}



private:
	int m;
};


void test01()
{
	//实例化对象
	Maker maker;

	Maker maker2(maker);

}

void test02()
{
	Maker maker1(10);//调用有参,常用方法
	Maker maker11(maker1);//调用拷贝构造，常用方法

	Maker maker2 = 10;//Maker maker2 =Maker(10),调用有参

	Maker maker3 = Maker(maker2);//调一次拷贝构造
	Maker maker4 = Maker(10);//调用有参构造

	//Maker maker5();//函数声明

	//int maker6();//函数声明
}
void test03()
{
	Maker maker = 10;//调用有参

	Maker maker2;
	maker2 = maker;//不调用构造函数
}

int main()
{
	//test01();
	//test02();
	test03();
	cout << "-----" << endl;
	system("pause");
	return EXIT_SUCCESS;
}

