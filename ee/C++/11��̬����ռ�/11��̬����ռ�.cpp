#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Maker{
public:
	Maker(int a)
	{
		cout << "有参构造函数" << endl;
	}

	~Maker()
	{
		cout << "析构函数" << endl;
	}
};

void test()
{
	Maker *maker = (Maker*)malloc(sizeof(Maker));
	if (NULL == maker)
	{
		return;
	}


	free(maker);
}

void test01()
{

	Maker *maker = new Maker(20);
	//new对象会在调用构造函数之前确保内存申请成功
	//Maker *maker = new Maker(10);

	//delete会在对象销毁之前调用析构函数
	delete maker;
}

int main()
{
	//test();
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

