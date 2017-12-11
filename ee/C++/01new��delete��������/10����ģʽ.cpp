#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//需求，类只能定义一个对象，（实例化一个对象）
class Maker{
private://1.把无参构造放到私有
	Maker()
	{
		
	}
	Maker(const Maker&maker){}//6.把拷贝构造放入私有
public:
	static Maker *getInstan()//5.提供一个静态成员函数返回这个指针
	{
		return mMaker;
	}
	
private://4.放到私有
	static Maker *mMaker;//2.定义一个静态成员变量
};

Maker *Maker::mMaker = new Maker;//3.在类外new一个对象,要把这句代码看成在类内

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
		cout << "两个对象是同一个对象" << endl;
	}
	else
	{
		cout << "两个对象不是同一个对象" << endl;
	}

	//Maker::mMaker = NULL;

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

