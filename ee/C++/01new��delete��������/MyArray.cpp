#include "MyArray.h"


MyArray::MyArray()
{
	this->mCapacity = 20;
	this->mSize = 0;
	this->p = new int[this->mCapacity];
	for (int i = 0; i < this->mCapacity; i++)
	{
		p[i] = 0;
	}
}


MyArray::~MyArray()
{
	if (p != NULL)
	{
		delete[] p;
		p = NULL;
	}

}

MyArray::MyArray(int capacity, int val)
{
	this->mCapacity = capacity;
	this->mSize = capacity;
	this->p = new int[this->mCapacity];
	for (int i = 0; i < this->mCapacity; i++)
	{
		p[i] = val;
	}


}
MyArray::MyArray(const MyArray &arr)
{
	this->mCapacity = arr.mCapacity;
	this->mSize = arr.mSize;

	this->p = new int[this->mCapacity];
	for (int i = 0; i < this->mSize; i++)
	{
		this->p[i] = arr.p[i];
	}
}

//添加数组的尾部
void MyArray::PushBack(int val)
{

}
//头插
void MyArray::PushFront(int val)
{

}
//删除尾部元素
void MyArray::PopBack()
{

}
//删除头部元素
void MyArray::PopFront()
{

}
//获取数组的元素个数
int MyArray::Size()
{
	return mSize;
}
//获取容量
int MyArray::Capacity()
{
	return mCapacity;
}
//指定位置插入元素
void MyArray::Insert(int pos, int val)
{
	
}
//获取指定位置的值
int &MyArray::Get(int pos)
{
	return this->p[pos];
}
//在指定的位置修改值
void MyArray::Set(int pos, int val)
{
	if (pos<0 || pos>this->mCapacity - 1)
	{
		return;
	}
	this->p[pos] = val;
}