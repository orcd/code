#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Maker{
	friend ostream & operator<<(ostream &out, Maker &m1);
public:
	Maker(string name,int age)
	{
		this->name = name;
		this->age = age;
	}

private:
	string name;
	int age;
};

ostream & operator<<(ostream &out, Maker &m1)
{
	
	out << "Name:" << m1.name << " Age:" << m1.age << endl;
	return out;
}

void test01()
{
	Maker m1("ЮђПе", 20);

	cout << m1 << endl;
	
	
}




int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

