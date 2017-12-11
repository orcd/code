#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Maker{
	//声明这个函数是Maker类的好朋友
	friend void GoodGay(Maker &maker);//不属于类
public:
	Maker()
	{
		SittingRoom = "客厅";
		mBedRoom = "卧室";
	}

public:
	string SittingRoom;//客厅
private:
	string mBedRoom;//卧室

};

void GoodGay(Maker &maker)
{
	cout << "好基友访问：" << maker.SittingRoom << endl;
	cout << "好基友访问：" << maker.mBedRoom << endl;
}

void test()
{
	Maker maker;
	GoodGay(maker);
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

