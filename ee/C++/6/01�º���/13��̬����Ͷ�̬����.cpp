#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal{
public:

	virtual void speak()//�麯�����麯���Ǹ��߱�������Ҫ��󶨡�
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
	animal->speak();//�ڱ���׶ξ�ȷ���˺����ĵ��õ�ַ
}

void test()
{
	Dog *dog = new Dog;

	doLogic(dog);
	//1.���Ͳ�ͬ����ôû����,����ת���ֻ࣬�����ǰ����ಽ����С�����ڰ�ȫ��Χ
	//2.�������dog��Ϊʲôanimal�ڽУ���Ϊ�ڱ���׶ξ�ȷ���˺���


}


int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

