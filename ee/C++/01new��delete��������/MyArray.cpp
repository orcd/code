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

//��������β��
void MyArray::PushBack(int val)
{

}
//ͷ��
void MyArray::PushFront(int val)
{

}
//ɾ��β��Ԫ��
void MyArray::PopBack()
{

}
//ɾ��ͷ��Ԫ��
void MyArray::PopFront()
{

}
//��ȡ�����Ԫ�ظ���
int MyArray::Size()
{
	return mSize;
}
//��ȡ����
int MyArray::Capacity()
{
	return mCapacity;
}
//ָ��λ�ò���Ԫ��
void MyArray::Insert(int pos, int val)
{
	
}
//��ȡָ��λ�õ�ֵ
int &MyArray::Get(int pos)
{
	return this->p[pos];
}
//��ָ����λ���޸�ֵ
void MyArray::Set(int pos, int val)
{
	if (pos<0 || pos>this->mCapacity - 1)
	{
		return;
	}
	this->p[pos] = val;
}