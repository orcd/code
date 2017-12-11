
#include <string.h>
#include <stdlib.h>

#include <iostream>
using namespace std;


/*
 * 1. 插入 insert(T value, int pos);
 * 2. 删除 remove(int pos);
 * 3. 拷贝构造应该禁止, operator=禁止
 * 4. 清楚所有的元素 clear()
 * 5. T operator[](int index)
 *
 * 6. sort(); 可选
 * */

/* 演示如何使用普通变量作为模板类参数 */
template <class T, int step>
class Array
{
public:
    T* datas;
    int capacity;
    int size;

    Array(const Array& other); // 不要实现

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

    T& operator[](int index)
    {
        if(index < 0 || index >= size)
            throw 1;

        return datas[index];
    }
};

// 将一个特例化的类，作为父类
class IntArray : public Array<int, 40>
{
    
};

int main()
{
    Array<void*, 20> arr;

    IntArray intArr;
    intArr.addValue(10);
    intArr.addValue(200);

    intArr.dump();
}






