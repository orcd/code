#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
	 void Cinfunc()
	{
		cout << "ÇëÊäÈëÃû×Ö£º" << endl;
		cin >> Name;
		cout << "ÇëÊäÈëID£º" << endl;
		cin >> Id;
	}

	void setStudent(string name,int id)
	{
		Name = name;
		Id = id;
	}

	string getName()
	{
		return Name;
	}

	int getId()
	{
		return Id;
	}

	void PrintStudent()
	{
		cout << "Name:" << Name << " ID:" << Id << endl;
	}

	int a;

private://Ë½ÓÐ
	string Name;
	int Id;
};

void test()
{
	Student s;
	s.Cinfunc();
	s.PrintStudent();

	s.setStudent("²¼¶ûÂê", 18);
	s.PrintStudent();

	int id=s.getId();
	string name = s.getName();

	
	
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

