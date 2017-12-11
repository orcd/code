#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Father{
public:
	//给数组赋值
	virtual void AddArr(int arr[], int len) = 0;
	//打印数组
	virtual void printArr(int arr[], int len) = 0;
	//排序
	virtual void sortArr(int arr[], int len) = 0;

	void Make(int arr[],int len)
	{
		AddArr(arr,len);
		printArr(arr, len);
		sortArr(arr, len);
		printArr(arr, len);
	}

};

class Son :public Father{
public:
	//给数组赋值
	virtual void AddArr(int arr[], int len)
	{
		for (int i = 0; i < len; i++)
		{
			arr[i] = i + 10;
		}
	}
	//打印数组
	virtual void printArr(int arr[], int len)
	{
		for (int i = 0; i < len; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	//排序
	virtual void sortArr(int arr[], int len)
	{
		for (int i = 0; i < len - 1; i++)
		{
			for (int j = i + 1; j < len; j++)
			{
				if (arr[i] < arr[j])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
};

void test()
{
	Father *fa = new Son;
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);
	fa->Make(arr, len);
	delete fa;
}


int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

