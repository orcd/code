#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//这个叫类
class Maker{//自定义数据类型

public://公有权限
	int a;//成员变量，成员属性
	Maker()//构造函数
	{

	}
	//设置圆的半径
	void setR(double r)
	{
		mR = r;
	}
	//求圆的周长
	double getL()
	{
		cout << "he" << endl;
		return 2 * 3.14*mR;
	}

	void printMaker()//成员函数，成员方法
	{
		cout << "圆的周长：" << getL() << endl;
	}
private://私有
	double mR;

};


void test()
{
	Maker maker;//定义变量。这个变量也叫对象
	maker.setR(100.2);//设置半径
	maker.getL();//求周长
	maker.printMaker();//打印

	
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

