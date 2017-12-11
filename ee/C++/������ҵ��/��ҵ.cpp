#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"test.h"
#include"Car.h"
using namespace std;

void test01()
{
	func1();//_Z4func1()
	func2(10, 20);
}
void test02()
{
	Car car;
	cout << car.getSize() << endl;
	cout << car.getColor() << endl;
	cout << car.getType() << endl;
	car.printCar();
}
void test03()
{
	Lorry lorry;
	lorry.setCapacity(3);
	lorry.setRank(2000);
	lorry.setType("¶«·ç");
	cout << lorry.getCapacity() << endl;;
	cout << lorry.getRank() << endl;;
	cout << lorry.getType() << endl;;
	lorry.printfLorry();
	cout << "-----------" << endl;
	cout<<lorry.getColor() << endl;
	cout <<lorry.getType() << endl;
	
	
}

int main2()
{
	test01();
	//test02();
	//test03();
	system("pause");
	return EXIT_SUCCESS;
}

