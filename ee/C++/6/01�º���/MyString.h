#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
using namespace std;
class MyString
{
	friend ostream &operator<<(ostream &out, MyString &str);
	friend istream &operator>>(istream &in, MyString &str);
public:
	MyString();
	MyString(int n,char c);//6��a  aaaaaa
	MyString(const MyString &str);
	MyString &operator=(const MyString &str);
	~MyString();
	

	MyString operator+(const MyString &str);
	MyString operator+(const char *s);

	MyString operator+=(const MyString &str);
	MyString operator+=(const char *s);

	char &operator[](int index);//������ÿ���ַ���ӡ

	int Size();




	/*
	MyString str1;
	MyString str2;
	MyString str3=str1+str2;//���ؼ�
	MyString str4=str1+"hello";//���ؼ�
	str4+=str3;//����+=
	str4+="hello";//����+=
	cout<<str4<<endl;//����<<
	cin>>//����>>

	�����г�Աָ����������Ҵ������ѿռ䣬��ʱ��
	��д�������죬��ֹǳ����
	��д��ֵ��������ֹ�ڴ�й©
	*/
private:
	char *p;
	int mSize;
};

