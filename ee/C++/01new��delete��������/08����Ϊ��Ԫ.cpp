#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Maker{
	//�����������Maker��ĺ�����
	friend class GoodGay;//��������
	friend class GoodFriend;
public:
	Maker()
	{
		SittingRoom = "����";
		mBedRoom = "����";
	}

public:
	string SittingRoom;//����
private:
	string mBedRoom;//����

};


class GoodGay
{
public:
	void VisitMaker(Maker &maker)
	{
		cout << "���ʣ�" << maker.SittingRoom << endl;
		cout << "���ʣ�" << maker.mBedRoom << endl;
	}
};
void test()
{
	Maker maker;
	GoodGay g;
	g.VisitMaker(maker);

}

//ͨ������ָ��������
class GoodFriend{
public:
	GoodFriend()
	{
		pmaker = new Maker;
	}

	void VisitMaker()
	{
		cout << "���ʣ�" << pmaker->SittingRoom << endl;
		cout << "���ʣ�" << pmaker->mBedRoom << endl;
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

