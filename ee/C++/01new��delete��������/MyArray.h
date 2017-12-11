#pragma once
#include<stdio.h>
class MyArray
{
public:
	MyArray();
	explicit MyArray(int capacity, int val = 0);
	MyArray(const MyArray &arr);

	//添加数组的尾部
	void PushBack(int val);
	//头插
	void PushFront(int val);
	//删除尾部元素
	void PopBack();
	//删除头部元素
	void PopFront();
	//获取数组的元素个数
	int Size();
	//获取容量
	int Capacity();
	//指定位置插入元素
	void Insert(int pos,int val);
	//获取指定位置的值
	int &Get(int pos);
	//在指定的位置修改值
	void Set(int pos, int val);

	~MyArray();

private:
	int *p;//指向真正保存数据的空间
	int mSize;//数组中有多少个元素
	int mCapacity;//容量

};

