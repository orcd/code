#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//1.引用做为函数参数

void func(int &a, int &b)
{
	int sum = a + b;//int sum=*a+*b;
	cout << "sum=" << sum << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	func(a, b);//func(&a,&b);
}

//2.引用做为函数的返回值
int &func2()
{
	/*int b = 10;
	int &p = b;
	return p;*/

	static int a = 10;

	return a;
}
void test02()
{
	//用值来接
	int a = func2();
	cout << "a=" << a << endl;
	
	//用引用来接
	int &ret2 = func2();
	cout << "ret2=" << ret2 << endl;

	//引用做左值
	func2() = 300;
	int ret3 = func2();

	cout << "ret3=" << func2();

}



int main()
{
	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

