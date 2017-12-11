#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Maker;
class GoodGay
{
public:
	void VisitMaker(Maker &maker);
};

class Maker{
	friend void GoodGay::VisitMaker(Maker &maker);
public:
	Maker()
	{
		SittingRoom = "¿ÍÌü";
		mBedRoom = "ÎÔÊÒ";
	}

public:
	string SittingRoom;//¿ÍÌü
private:
	string mBedRoom;//ÎÔÊÒ

};

void GoodGay::VisitMaker(Maker &maker)
{
	cout << "·ÃÎÊ£º" << maker.SittingRoom << endl;
	cout << "·ÃÎÊ£º" << maker.mBedRoom << endl;
}

void test()
{
	Maker maker;
	GoodGay gg;
	gg.VisitMaker(maker);
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

