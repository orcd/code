#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1.new基础数据类型

void test()
{
	//int *pInt = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//不建议这样写
	int *pInt = new int[10];
	for (int i = 0; i < 10; i++)
	{
		pInt[i] = i + 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "pint[]:" << pInt[i] << " " << endl;
	}

	char *Pchar = new char[64];
	memset(Pchar, 0, 64);
	strcpy(Pchar, "hello world");
	cout << Pchar << endl;

	delete[] pInt;//new时有[]，delete也要有
	delete[] Pchar;

}

//动态创建对象
class Maker{
public:
	Maker()
	{
		cout << "无参构造" << endl;
	}
	Maker(int a)
	{
		cout << "有参构造" << endl;
	}
	~Maker()
	{
		cout << "析构函数" << endl;
	}
};

void test02()
{
	Maker *p = new Maker[2];//创建对象时调用无参构造

	delete[] p;

	//Maker *p2 = new Maker[2]{Maker(10), Maker(20)};
}

void test03()
{
	//void *p = new Maker;
	Maker *p = new Maker;
	delete p;//没有调用析构函数
}

void test04()
{
	//Maker *p = new Maker[2];
	//delete p;//会档


	/*int *pInt = new int[10];
	for (int i = 0; i < 10; i++)
	{
		pInt[i] = i + 10;
	}

	delete pInt;*/
}


int main()
{
	//test();
	//test03();
	//test04();
	system("pause");
	return EXIT_SUCCESS;
}

