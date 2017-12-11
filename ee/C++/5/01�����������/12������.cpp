#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"MyArray.h"
using namespace std;

void printMyArray(MyArray &arr)
{
	for (int i = 0; i < arr.Size(); i++)
	{
		cout << arr.Get(i) <<" ";
	}
	cout << endl;
}

void test()
{
	MyArray arr(20,1);
	printMyArray(arr);

	for (int i = 0; i < arr.Size(); i++)
	{
		arr.Get(i) = i + 100;

	}
	printMyArray(arr);

	arr.Set(2, 0);

	printMyArray(arr);

	cout << "-------" << endl;

	MyArray arr2(arr);
	printMyArray(arr2);

}

void test02()
{
	MyArray arr;

	for (int i = 0; i < 5; i++)
	{
		arr.PushBack(i + 10);
		
	}
	printMyArray(arr);


	for (int i = 0; i < 5; i++)
	{
		arr.PushFront(i + 20);
	}
	printMyArray(arr);

	//指定位置插入
	arr.Insert(2, 100);
	printMyArray(arr);

	arr.Set(3, 200);
	printMyArray(arr);

	arr.PopBack();
	arr.PopFront();
	printMyArray(arr);
}

void test03()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i + 10;
	}

	arr[7] = 20;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}

void test04()
{
	MyArray arr;
	for (int i = 0; i < 5; i++)
	{
		arr.PushBack(i + 10);

	}
	MyArray arr1;
	arr1 = arr;

	printMyArray(arr);

}

void test05()
{
	MyArray arr;
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 100 + i;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	//test();
	//test02();
	//test03();
	//test04();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}

