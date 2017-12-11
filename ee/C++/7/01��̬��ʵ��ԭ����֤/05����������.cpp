#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//虚析构函数为了解决父类的指针指向子类对象时，并用父类指针删除子类对象

class Animal{
public:
	Animal()
	{
		cout << "Animal构造" << endl;
	}

	//virtual ~Animal()//虚析构函数
	//{
	//	cout << "Animal析构" << endl;
	//}

	virtual void speak()
	{
		cout << "Animal speak()" << endl;
	}

	virtual ~Animal() = 0;//纯虚析构函数
	//纯虚析构函数必须在类外实现
};
//纯虚析构函数和虚析构函数的区别，有纯虚析构函数的类变为抽象类，不能实例化对象

Animal:: ~Animal()
{
	cout << "纯虚析构函数" << endl;
}

class Cat :public Animal{
public:
	Cat()
	{
		cout << "Cat的构造" << endl;

		pName = new char[64];
		memset(pName, 0, 64);
		strcpy(pName, "小狗");
	}
	virtual void speak()
	{
		cout << "Cat" <<this->pName<<"speak"<< endl;
	}

	~Cat()
	{
		cout << "cat析构" << endl;

		if (this->pName != NULL)
		{
			delete[] this->pName;
			this->pName = NULL;
		}
	}

public:
	char *pName;
};

void test()
{
	Animal *animal = new Cat;

	animal->speak();

	//Animal a;

	delete animal;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

