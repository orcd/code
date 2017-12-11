#pragma once
#include<iostream>
#include<string>
using namespace std;
class Car
{
public:
	Car();//构造函数
	int getSize();
	string getColor();
	string getType();
	void printCar();
private:
	int Size;//大小
	string color;//颜色
	string type;//品牌

};

class Lorry :public Car{
public:
	int getCapacity();
	void setCapacity(int capacity);

	int getRank();
	void setRank(int rank);

	string getType();
	void setType(string type);

	void printfLorry();
private:
	int capacity;//容量
	int rank;//级别
	string type;//品牌

};

