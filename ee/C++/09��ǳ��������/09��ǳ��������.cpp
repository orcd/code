#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker(int id,int age)
	{
		this->mId = id;
		this->mage = age;
	}


public:
	int mId;
	int mage;


};

void test01()
{
	Maker m1(10, 20);

	cout << "ID:" << m1.mId << " Age:" << m1.mage << endl;
}

class Student{
public:
	Student(const char *name,int age)
	{
		Pname = (char *)malloc(strlen(name) + 1);//2.�����˶ѿռ�
		strcpy(Pname, name);
		Age = age;
	}
	Student(const Student &s2)
	{
		cout << "�Լ�д�Ŀ�������" << endl;

		Pname = (char *)malloc(strlen(s2.Pname) + 1);
		strcpy(Pname, s2.Pname);
		this->Age = s2.Age;

	}

	~Student()
	{
		cout << "��������" << endl;
		if (Pname != NULL)
		{
			free(Pname);
			Pname = NULL;
		}
	}
public:
	int Age;
	char *Pname;//1.��ָ��
};
void test02()
{
	Student s1("���", 20);//�в�

	Student s2(s1);//����

	cout << "s1.name:" << s1.Pname << " s1.Age:" << s1.Age << endl;
	cout << "s2.name:" << s2.Pname << " s2.Age:" << s2.Age << endl;


}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

