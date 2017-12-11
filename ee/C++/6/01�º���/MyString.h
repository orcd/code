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
	MyString(int n,char c);//6个a  aaaaaa
	MyString(const MyString &str);
	MyString &operator=(const MyString &str);
	~MyString();
	

	MyString operator+(const MyString &str);
	MyString operator+(const char *s);

	MyString operator+=(const MyString &str);
	MyString operator+=(const char *s);

	char &operator[](int index);//遍历把每个字符打印

	int Size();




	/*
	MyString str1;
	MyString str2;
	MyString str3=str1+str2;//重载加
	MyString str4=str1+"hello";//重载加
	str4+=str3;//重载+=
	str4+="hello";//重载+=
	cout<<str4<<endl;//重载<<
	cin>>//重载>>

	类里有成员指针变量，并且打算分配堆空间，这时：
	重写拷贝构造，防止浅拷贝
	重写赋值函数，防止内存泄漏
	*/
private:
	char *p;
	int mSize;
};

