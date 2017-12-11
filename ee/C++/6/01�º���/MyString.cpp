#include "MyString.h"


MyString::MyString()
{
	this->p = new char[1];
	this->p[0] = '\0';
	this->mSize = 0;
}
MyString::MyString(int n, char c)//6个a  aaaaaa
{
	this->p = new char[n + 1];
	for (int i = 0; i < n; i++)
	{
		this->p[i] = c;
	}
	this->p[n] = '\0';
	this->mSize = n;
}
MyString::MyString(const MyString &str)
{
	this->p = new char[strlen(str.p) + 1];
	strcpy(this->p, str.p);
	this->mSize = str.mSize;
}
MyString &MyString::operator=(const MyString &str)
{
	//1.释放原来空间
	if (this->p != NULL)
	{
		delete[] this->p;
		this->p = NULL;
	}

	//2.申请新空间
	this->p = new char[strlen(str.p) + 1];
	strcpy(this->p, str.p);
	this->mSize = str.mSize;

	return *this;

}
MyString::~MyString()
{
	if (this->p != NULL)
	{
		delete[] this->p;
		this->p = NULL;
	}
}


MyString MyString::operator+(const MyString &str)
{
	int newstrlen = this->mSize + str.mSize + 1;

	MyString temp;

	if (temp.p != NULL)
	{
		delete[] temp.p;
		temp.p = NULL;
	}

	temp.p = new char[newstrlen];
	memset(temp.p, 0, newstrlen);
	temp.mSize = this->mSize + str.mSize;

	strcat(temp.p, this->p);
	strcat(temp.p, str.p);


	return temp;


}
MyString MyString::operator+(const char *s)
{
	int newstrlen = this->mSize + strlen(s)+1;

	MyString temp;

	if (temp.p != NULL)
	{
		delete[] temp.p;
		temp.p = NULL;
	}

	temp.p = new char[newstrlen];
	memset(temp.p, 0, newstrlen);
	temp.mSize = this->mSize + strlen(s);

	strcat(temp.p, this->p);
	strcat(temp.p, s);


	return temp;
}

MyString MyString::operator+=(const MyString &str)
{
	int newstrlen = this->mSize + str.mSize + 1;
	char *newspace = new char[newstrlen];
	memset(newspace, 0, newstrlen);

	strcat(newspace, this->p);
	strcat(newspace, str.p);

	if (this->p != NULL)
	{
		delete[] this->p;
		this->p = NULL;
	}

	this->p = newspace;
	this->mSize = newstrlen-1;
	
	return *this;
}
MyString MyString::operator+=(const char *s)
{
	int newstrlen = this->mSize + strlen(s) + 1;
	char *newspace = new char[newstrlen];
	memset(newspace, 0, newstrlen);

	strcat(newspace, this->p);
	strcat(newspace, s);

	if (this->p != NULL)
	{
		delete[] this->p;
		this->p = NULL;
	}

	this->p = newspace;
	this->mSize = newstrlen - 1;

	return *this;
}

char &MyString::operator[](int index)//遍历把每个字符打印
{
	return this->p[index];
}

int MyString::Size()
{
	return this->mSize;
}


ostream &operator<<(ostream &out, MyString &str)
{
	out << str.p;
	return out;
}
istream &operator>>(istream &in, MyString &str)
{
	char temp[1024] = { 0 };

	in >> temp;

	//1.释放str的空间
	if (str.p != NULL)
	{
		delete[] str.p;
		str.p = NULL;
	}

	str.p = new char[strlen(temp) + 1];
	memset(str.p, 0, strlen(temp) + 1);
	strcpy(str.p, temp);

	return in;
}
