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

	void printMyClass()const//���γ�Ա���� ��Ҳ����������
	{
		//id = 30;//�����޸�
		score = 300;
		cout << "id:" << this->id << " Age:" << age <<"score:"<<score<< endl;
	}

private:
	int id;
	int age;
	mutable int score;
};
//1.const���εĳ�Ա�����ڣ������޸ĳ�Ա���������Զ�
//2.mutable���εĳ�Ա��������
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

