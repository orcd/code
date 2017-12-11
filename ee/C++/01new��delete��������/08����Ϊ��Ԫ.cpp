#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Maker{
	//声明这个类是Maker类的好朋友
	friend class GoodGay;//不属于类
	friend class GoodFriend;
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


class GoodGay
{
public:
	void VisitMaker(Maker &maker)
	{
		cout << "访问：" << maker.SittingRoom << endl;
		cout << "访问：" << maker.mBedRoom << endl;
	}
};
void test()
{
	Maker maker;
	GoodGay g;
	g.VisitMaker(maker);

}

//通过类内指针来访问
class GoodFriend{
public:
	GoodFriend()
	{
		pmaker = new Maker;
	}

	void VisitMaker()
	{
		cout << "访问：" << pmaker->SittingRoom << endl;
		cout << "访问：" << pmaker->mBedRoom << endl;
	}
	~GoodFriend()
	{
		delete pmaker;
	}
	
private:
	Maker *pmaker;
};
void test02()
{
	GoodFriend gf;
	gf.VisitMaker();


}

int main()
{
	//test();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

