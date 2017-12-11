#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal{
public:

	virtual void speak()//虚函数，虚函数是告诉编译器不要早绑定。
	{
		cout << "Animal speak()" << endl;
	}
};

class Dog :public Animal{
public:
	void speak()
	{
		cout << "Dog speak()" << endl;
	}
};

void doLogic(Animal *animal)
{
	animal->speak();//在编译阶段就确定了函数的调用地址
}

void test()
{
	Dog *dog = new Dog;

	doLogic(dog);
	//1.类型不同，怎么没报错,子类转父类，只不过是把子类步长变小，还在安全范围
	//2.传入的是dog。为什么animal在叫，因为在编译阶段就确定了函数


}


int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

