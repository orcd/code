#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//有纯虚函数的类叫抽象类，不能实例化对象
class Father{//接口类，没有数据定义，只有函数原型

public:
	//函数的功能说明
	//a:
	//b:
	//返回值
	virtual void func(int a, int b) = 0;//纯虚函数
	virtual int func2(int a, int b) = 0;//接口

};
//如果继承一个抽象类，不去实现纯虚函数，那么这个类也是抽象类
//注意：要实现所有父类的纯虚函数
class Son :public Father{
public:
	virtual void func(int a, int b)//纯虚函数
	{

	}

	virtual int func2(int a, int b)//接口
	{

	}
};

void test()
{
	//Father f;抽象类不能实例化对象

	Son s;
}


int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

