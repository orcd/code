#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker(int id, int age)
	{
		this->id = id;
		this->age = age;
		score = 100;
	}
	void func()
	{

	}
	void printMyClass()const//修饰成员函数 ，也叫做常函数
	{
		//id = 30;//不能修改
		score = 300;
		cout << "id:" << this->id << " Age:" << age << "score:" << score << endl;
	}

public:
	int id;
	int age;
	mutable int score;
};

void test()
{
	const Maker maker(1, 20);//1.常对象，一旦初始化不能改变，但是可以间接修改
	
	//maker.id = 200;//2.常对象不能修改普通的成员变量
	maker.score = 400;//3.可以修改mutable修饰的成员变量
	//maker.func();//4.常对象不能访问普通的成员函数
	maker.printMyClass();//5.常对象可以访问常函数
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

