#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//1.静态成员变量的生命周期是整个程序，作用域是类内
//2.静态成员变量必须在类内声明，类外初始化
//3.静态成员变量属于类，不属于对象，是所有对象共享
//4.静态成员变量可以用类来访问，也可以用对象来访问
//5.静态成员变量也有权限，如果私有化，类外是不能访问
//6.静态成员函数只能访问静态成员变量，不能访问普通成员变量
//7.const修饰的静态成员变量最好在类内初始化
class Maker{
public:
	static int a;//静态成员变量
	//static int b = 20;类内不能初始化

	int d;
	static void func()
	{
		//d;//不能访问普通成员变量
		a;//可以访问静态成员变量
	}
	const static int e = 20;//const修饰的静态成员变量最好在类初始化
	const static int f;
private:
	static int c;
};

int Maker::a = 10;//类外初始化

const int Maker::f = 20;

void test01()
{
	//a = 10;静态成员变量的作用域在类内

	cout << Maker::a << endl;
	Maker maker;
	cout << maker.a << endl;

	//maker.c;私有成员类外不能访问
	//Maker::c;


}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

