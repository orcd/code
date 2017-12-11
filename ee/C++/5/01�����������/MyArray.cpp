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
	//�ж��Ƿ����ټ���Ԫ��
	if (this->mSize == this->mCapacity)
	{
		return;
	}
	this->p[mSize] = val;
	this->mSize++;
}
//ͷ��
void MyArray::PushFront(int val)
{
	//�ж��Ƿ����ټ���Ԫ��
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
//ɾ��β��Ԫ��
void MyArray::PopBack()
{
	if (this->mSize == 0)
	{
		return;
	}

	this->mSize--;
}
//ɾ��ͷ��Ԫ��
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

//ָ��λ�ò���Ԫ��
void MyArray::Insert(int pos, int val)
{
	//�ж��Ƿ����ټ���Ԫ��
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


//��ֵ����
MyArray  &MyArray::operator=(const MyArray &arr)
{
	//1.�ͷ�ԭ���ռ�
	if (this->p != NULL)
	{
		delete[] this->p;
		this->p = NULL;
	}

	//2.�����¿ռ�
	this->mCapacity = arr.mCapacity;
	this->mSize = arr.mSize;

	this->p = new int[this->mCapacity];
	for (int i = 0; i < this->mCapacity; i++)
	{
		this->p[i] = arr.p[i];
	}

	return *this;

}


//�����±�[]
int &MyArray::operator[](int index)
{
	return this->p[index];
}