#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//������ֻ�ܶ���һ�����󣬣�ʵ����һ������
class Maker{
private://1.���޲ι���ŵ�˽��
	Maker()
	{
		
	}
	Maker(const Maker&maker){}//6.�ѿ����������˽��
public:
	static Maker *getInstan()//5.�ṩһ����̬��Ա�����������ָ��
	{
		return mMaker;
	}
	
private://4.�ŵ�˽��
	static Maker *mMaker;//2.����һ����̬��Ա����
};

Maker *Maker::mMaker = new Maker;//3.������newһ������,Ҫ�������뿴��������

void test()
{
	
	Maker *maker1 = Maker::getInstan();
	Maker *maker2 = Maker::getInstan();


	Maker *maker3 = Maker::getInstan();
	Maker *maker4 = Maker::getInstan();

	cout << "maker1:" << maker1 << " maker2:" << maker2 << endl;
	cout << "maker3:" << maker3 << " maker4:" << maker4<< endl;
	//Maker maker(*maker1);

	if (maker1 == maker2)
	{
		cout << "����������ͬһ������" << endl;
	}
	else
	{
		cout << "����������ͬһ������" << endl;
	}

	//Maker::mMaker = NULL;

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

