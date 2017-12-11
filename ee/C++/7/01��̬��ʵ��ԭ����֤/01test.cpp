#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Animal{
public:
	virtual void speak()
	{
		cout << "Anima speak()" << endl;
	}

	virtual void speak1()
	{
		cout << "Anima speak1()" << endl;
	}

	 void speak2()
	{
		cout << "Anima speak2()" << endl;
	}
};
//1.有继承
class Dog :public Animal{
public:
	virtual void speak()//2.重写父类的虚函数
	{
		cout << "Dog speak()" << endl;
	}
};

void test()
{
	cout << sizeof(Dog) << endl;//1

	Animal *animal = new Dog;//父类指针指向子类对象


}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

