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
//1.�м̳�
class Dog :public Animal{
public:
	virtual void speak()//2.��д������麯��
	{
		cout << "Dog speak()" << endl;
	}
};

void test()
{
	cout << sizeof(Dog) << endl;//1

	Animal *animal = new Dog;//����ָ��ָ���������


}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

