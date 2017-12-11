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
		cout << "拷贝构造" << endl;
	}

	Maker &operator=(const Maker &m)
	{
		cout << "赋值函数" << endl;

		return *this;
	}

public:
	int mID;
	int mAge;
};

//编译器给我们的类添加了什么函数：
//默认的构造函数，默认的拷贝构造函数，默认的析构函数，默认的赋值函数

void test01()
{
	Maker m1(1,10);
	Maker m2;

	m2 = m1;

	cout << "ID1:" << m1.mID << " Age1:" << m1.mAge << endl;
	cout << "ID2:" << m2.mID << " Age2:" << m2.mAge << endl;

	//默认的赋值函数做了简单的赋值操作


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
	//赋值函数
	Student &operator=(const Student &str )
	{
		//1.先释放空间
		if (this->pName != NULL)
		{
			delete[] this->pName;
			this->pName = NULL;
		}
		//2.申请新空间
		this->pName = new char[strlen(str.pName) + 1];
		//拷贝数据
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
	Student s1("悟空");
	Student s2("贝吉塔");

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

	s1 = s2 = s3;//最终s3给s1

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

