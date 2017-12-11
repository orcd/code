#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Maker{
public:
	Maker()
	{
		this->mID = 0;
		this->mAge = 0;
	}
	Maker(int id, int age)
	{
		this->mID = id;
		this->mAge = age;
	}

	Maker(const Maker &maker)
	{
		cout << "��������" << endl;
	}

	Maker &operator=(const Maker &m)
	{
		cout << "��ֵ����" << endl;

		return *this;
	}

public:
	int mID;
	int mAge;
};

//�����������ǵ��������ʲô������
//Ĭ�ϵĹ��캯����Ĭ�ϵĿ������캯����Ĭ�ϵ�����������Ĭ�ϵĸ�ֵ����

void test01()
{
	Maker m1(1,10);
	Maker m2;

	m2 = m1;

	cout << "ID1:" << m1.mID << " Age1:" << m1.mAge << endl;
	cout << "ID2:" << m2.mID << " Age2:" << m2.mAge << endl;

	//Ĭ�ϵĸ�ֵ�������˼򵥵ĸ�ֵ����


}

class Student{
public:
	Student(const char *name)
	{
		pName = new char[strlen(name) + 1];
		strcpy(pName, name);
	}
	Student(const Student &st)
	{
		this->pName = new char[strlen(st.pName) + 1];
		strcpy(pName, st.pName);
	}
	//��ֵ����
	Student &operator=(const Student &str )
	{
		//1.���ͷſռ�
		if (this->pName != NULL)
		{
			delete[] this->pName;
			this->pName = NULL;
		}
		//2.�����¿ռ�
		this->pName = new char[strlen(str.pName) + 1];
		//��������
		strcpy(this->pName, str.pName);
		return *this;

	}

	void printStudent()
	{
		cout << "Name:" << this->pName << endl;
	}

	~Student()
	{
		if (pName != NULL)
		{
			delete[] pName;
			pName = NULL;
		}
	}
public:
	char *pName;
};

void test02()
{
	Student s1("���");
	Student s2("������");

	s1.printStudent();
	s2.printStudent();

	s2 = s1;

	s1.printStudent();
	s2.printStudent();

}

void test03()
{
	Student s1("aaa");
	Student s2("bbb");
	Student s3("ccc");

	s1 = s2 = s3;//����s3��s1

	cout << &s2 << endl;
	cout << &s3 << endl;
	cout << &(s2 = s3) << endl;

}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

