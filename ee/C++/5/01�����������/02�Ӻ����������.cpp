#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//运算符重载的作用：让代码更加清晰，易读
//不要改变运算符本来的寓意
//运算符重载可以写成成员函数，也可以写成全局函数

//运算符重载的本质：函数调用
class Student{
public:
	Student()
	{
		this->mid = 0;
	}
	Student(int val)
	{
		this->mid =val;
	}
public:
	int mid;
};


class Maker{
public:
	Maker(int id,int age)
	{
		this->id = id;
		this->age = age;
	}
	//函数名
	//Maker operator+(Maker &p2)
	//{
	//	cout << "重载" << endl;
	//	Maker temp(this->id + p2.id, this->age + p2.age);

	//	return temp;
	//}
	/*Student operator+(Student &s)
	{
		Student stu;
		stu.mid = this->id + s.mid;

		return stu;
	}*/


public:
	int id;
	int age;
};

//全局函数
Maker operator+(Maker &m1,Maker &m2)
{
	Maker temp(m1.id + m2.id, m1.age + m2.age);

	return temp;
}

void test01()
{
	Maker m1(10,20);
	Maker m2(30,40);


	Maker m3=m1 + m2;

	cout << m3.id << " " << m3.age << endl;
	
}
                 
Student operator+(Maker &m1,Student &s1)
{
	return Student();
}

void test02()
{
	Maker m1(10, 20);
	Student s1(30);
	Student s2=m1 + s1;
}

int operator+(Maker &m1, int val)
{
	return 10;
}

void test03()
{
	Maker m1(10,20);
	int a=m1 + 10;
	cout << "a:" << a << endl;
}

int main()
{
	//test01();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

