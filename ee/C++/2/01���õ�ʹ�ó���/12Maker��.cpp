#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Maker{
public:
	void init()
	{
		Name = "������";
		Age = 260;
	}

	void setName(string name)
	{
		Name = name;
	}

	string getName()
	{
		return Name;
	}

	void setAge(int age)
	{
		if (age <100 && age>0)
		{
			Age = age;
		}
		else
		{
			cout << "����̫��" << endl;
		}
		
	}
	int getAge()
	{
		return Age;
	}

	void PrintMaker()
	{
		cout << "Name:" << Name << " Age:" << Age << endl;

		cout << "Name:" << getName() << " Age:" << getAge() << endl;
	}

private:
	string Name;
	int Age;
};

int main()
{
	Maker maker;
	maker.init();//��ʶ��
	maker.PrintMaker();
	maker.setAge(60);
	maker.setName("�̵�");
	maker.PrintMaker();




	system("pause");
	return EXIT_SUCCESS;
}

