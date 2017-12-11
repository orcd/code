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
	//判断是否能再加入元素
	if (this->mSize == this->mCapacity)
	{
		return;
	}
	this->p[mSize] = val;
	this->mSize++;
}
//头插
void MyArray::PushFront(int val)
{
	//判断是否能再加入元素
	if (this->mSize == this->mCapacity)
	{
		return;
	}

	for (int i = this->mSize - 1; i >= 0; i--)
	{
		this->p[i + 1] = this->p[i];
	}

	this->p[0] = val;
	this->mSize++;
}
//删除尾部元素
void MyArray::PopBack()
{
	if (this->mSize == 0)
	{
		return;
	}

	this->mSize--;
}
//删除头部元素
void MyArray::PopFront()
{
	if (this->mSize == 0)
	{
		return;
	}

	for (int i = 0; i < this->mSize - 1; i++)
	{
		this->p[i] = this->p[i + 1];
	}

	this->mSize--;
}

//指定位置插入元素
void MyArray::Insert(int pos, int val)
{
	//判断是否能再加入元素
	if (this->mSize == this->mCapacity)
	{
		return;
	}
	if (pos<0 || pos>this->mCapacity - 1)
	{
		return;
	}

	for (int i = this->mSize - 1; i >= pos; i--)
	{
		this->p[i + 1] = this->p[i];
	}
	this->p[pos] = val;
	this->mSize++;

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


//赋值函数
MyArray  &MyArray::operator=(const MyArray &arr)
{
	//1.释放原来空间
	if (this->p != NULL)
	{
		delete[] this->p;
		this->p = NULL;
	}

	//2.申请新空间
	this->mCapacity = arr.mCapacity;
	this->mSize = arr.mSize;

	this->p = new int[this->mCapacity];
	for (int i = 0; i < this->mCapacity; i++)
	{
		this->p[i] = arr.p[i];
	}

	return *this;

}


//数组下标[]
int &MyArray::operator[](int index)
{
	return this->p[index];
}