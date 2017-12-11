
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <iostream>
using namespace std;

template <class T, int step> class Array;
template<class T, int step> void Print(const Array<T, step>& obj);


/* 演示如何使用普通变量作为模板类参数 */
template <class T, int step>
class Array
{
    // 最好的方式
    friend Array<T, step> operator+ (const Array<T, step>& arr1, const Array<T, step>& arr2)
    {
        Array<T, step> ret;

        // do add ....
        printf("add called\n");

        return ret;
    }

    friend void Print<>(const Array<T, step>& arr1);
    

private:
    T* datas;
    int capacity;
    int size;

public:
    Array(int capacity = 30) : capacity(capacity), size(0)
    {
    //    datas = malloc(sizeof(T) * capacity);
        datas = new T[capacity];
    }

    void addValue(T value)
    {
        if(size >= capacity)
        {
            T* newDatas = new T[capacity + step];
            memcpy(newDatas, datas, sizeof(T) * capacity);
            capacity += step;
            delete []datas;
            datas = newDatas;
            //datas = realloc(datas, capacity * sizeof(T));
        }
        datas[size++] = value;
    }

    void dump()
    {
        for(int i=0; i<size; ++i)
        {
            cout << datas[i] << endl;
        }
    }
};

#if 0
template<class T, int step>
Array<T, step> operator+ (Array<T, step> arr1, Array<T, step> arr2)
{
    Array<T, step> ret;

    // do add ....
    printf("add called\n");

    return ret;
}
#endif

template<class T, int step>
void Print(const Array<T, step>& obj)
{
    printf("print called\n");
}

int main()
{
    Array<void*, 20> arr1;
    Array<void*, 20> arr2;

    arr1 + arr2;

    Print(arr1);
}






