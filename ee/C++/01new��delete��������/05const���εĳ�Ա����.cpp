#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyClass
{
public:
	MyClass(int id, int age)
	{
		this->id = id;
		this->age = age;
		score = 100;
	}

	void printMyClass()const//修饰成员函数 ，也叫做常函数
	{
		//id = 30;//不能修改
		score = 300;
		cout << "id:" << this->id << " Age:" << age <<"score:"<<score<< endl;
	}

private:
	int id;
	int age;
	mutable int score;
};
//1.const修饰的成员函数内，不能修改成员变量，可以读
//2.mutable修饰的成员变量除外
void test01()
{
	MyClass myclass(1, 20);
	myclass.printMyClass();
}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

