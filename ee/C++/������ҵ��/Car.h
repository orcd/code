#pragma once
#include<iostream>
#include<string>
using namespace std;
class Car
{
public:
	Car();//���캯��
	int getSize();
	string getColor();
	string getType();
	void printCar();
private:
	int Size;//��С
	string color;//��ɫ
	string type;//Ʒ��

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
	int capacity;//����
	int rank;//����
	string type;//Ʒ��

};

