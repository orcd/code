#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class MyFuncter{
public:
	MyFuncter()
	{
		name = "翠花";
	}

	int operator()(int val1,int val2)
	{
		
		cout << "我是假的函数" << endl;
		return val1 + val2;
	}
	

	void printMyFuncter()
	{
		cout << "你好漂亮" << endl;
	}
private:
	string name;
};




void test()
{

	MyFuncter func;
	func(10,20);//仿函数

	cout << MyFuncter()(30,40) << endl;//匿名对象

}




int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

