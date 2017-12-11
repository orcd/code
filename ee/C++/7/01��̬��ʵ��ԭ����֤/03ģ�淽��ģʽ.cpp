#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Drink{
public:
	virtual void Boil() = 0;//纯虚函数
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void AddSometing() = 0;

	//确定函数的调用顺序，模版方式
	void Make()
	{
		 Boil();
		 Brew();
		 PourInCup();
		 AddSometing();

		 //给数组赋值
		 //打印数组内容
		 //排序功能
		 //打印数组内容

	}


};

class Coffee :public Drink{
public:

	virtual void Boil()//纯虚函数
	{
		cout << "煮点露水" << endl;
	}
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入缸中" << endl;
	}
	virtual void AddSometing()
	{
		cout << "加点辣椒" << endl;
	}


};

class Tea :public Drink{
public:
	virtual void Boil()//纯虚函数
	{
		cout << "煮点泉水" << endl;
	}
	virtual void Brew()
	{
		cout << "冲泡茶" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入盆中" << endl;
	}
	virtual void AddSometing()
	{
		cout << "加点芥末" << endl;
	}


};

void test()
{
	Drink *drink = NULL;
	drink = new Coffee;

	drink->Make();

	delete drink;

	cout << "-------------" << endl;
	drink = new Tea;
	drink->Make();

	delete drink;


}




int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

