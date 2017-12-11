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
	int arr[10];
	arr[2] = 30;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

