#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{

public:
	void func()//权限是给编译器看的。在类内没有权限之分
	{
		bing;
		mFace;
		caichan;
	}
public://公有
	int mFace;//帅

private://私有
	int bing;

protected://保护
	int caichan;
};

class Son :public Maker{//继承
public:
	void func()
	{
		mFace;
		caichan;
		//bing;
	}
};

//类内：自己的类内没有权限之分
//如果有继承关系的类，子类可以访问父类的保护和公有权限的成员属性


//权限：
//类外可以访问公有权限的成员
//类外部不可以访问保护和私有的成员

//在子类的类内，可以访问父类的保护和公有权限的成员

void test()
{
	Maker maker;

	maker.func();
	maker.mFace;
	

}
int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

