#pragma once
#include<stdio.h>
class MyArray
{
public:
	MyArray();
	explicit MyArray(int capacity, int val = 0);
	MyArray(const MyArray &arr);

	//��ֵ����
	MyArray&operator=(const MyArray &arr);
	//�����±�[]
	int &operator[](int index);

	//��������β��
	void PushBack(int val);
	//ͷ��
	void PushFront(int val);
	//ɾ��β��Ԫ��
	void PopBack();
	//ɾ��ͷ��Ԫ��
	void PopFront();
	//��ȡ�����Ԫ�ظ���
	int Size();
	//��ȡ����
	int Capacity();
	//ָ��λ�ò���Ԫ��
	void Insert(int pos,int val);
	//��ȡָ��λ�õ�ֵ
	int &Get(int pos);
	//��ָ����λ���޸�ֵ
	void Set(int pos, int val);

	~MyArray();

private:
	int *p;//ָ�������������ݵĿռ�
	int mSize;//�������ж��ٸ�Ԫ��
	int mCapacity;//����

};

