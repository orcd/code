#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Maker{
	friend istream &operator>>(istream &in, Maker &m);
public:
	Maker(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	int getAge()
	{
		return age;
	}
private:
	string name;
	int age;
};

istream &operator>>(istream &in,Maker &m)
{
	
	in >> m.age;
	in >> m.name;
	
	return in;
}

void test()
{
	Maker m("aa", 20);
	cin >> m;
	cout << m.getAge() << endl;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

