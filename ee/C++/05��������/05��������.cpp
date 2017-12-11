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
	Maker(const Maker &maker)//const可以不加，但&必须加
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
	/*Maker maker;

	Maker maker2 = Maker();*/
	//匿名对象，该的生命周期在当前行
	Maker();

	cout << "生命周期" << endl;


	Maker maker;

	//Maker(maker);//编译器会把他，Maker maker; 报错
}



int main()
{
	
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

