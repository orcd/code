#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//const int a = 10;//有内存，

void test01()
{
	//int *p = (int *)&a
	//*p = 300;//不能修改

	//cout << "a=" << a << endl;
	
	volatile const int b = 100;

	int *p = (int *)&b;

	*p = 300;

	//cout << "a=" << 100 << endl;//常量折叠
	//cout << "b=" << b << endl;//打印100


	extern const int cc;
	cout << "c=" << cc << endl;//const修饰的全局变量具有内部链接属性
	//如果确实要使用，在定义const int c=200的前面加上extern

}

void test02()
{
	//1.编译器不会优化
	int a = 10;
	const int b = a;

	int *p = (int *)&b;
	*p = 200;

	cout << "b=" << b << endl;
}

//自定义数据类型不会发生常量折叠
struct Maker{//自定义数据类型
	Maker()//构造函数
	{
		name = "悟空";
		age = 20;
	}
	int age;
	string name;


};

void test03()
{
	const Maker maker;//const int maker

	cout << "Name:" << maker.name << "Age:" << maker.age << endl;

	Maker *p = (Maker *)&maker;

	p->name = "贝吉塔";
	p->age = 30;

	cout << "Name:" << maker.name << "Age:" << maker.age << endl;


}

//const int e = 10;//没有内存
//
//void test04()
//{
//	cout << "e=" << 10 << endl;
//}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	system("pause");
	return EXIT_SUCCESS;
}

