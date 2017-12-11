#include <stdio.h>

// 类型泛化
template <class T>
T add(T a, T b)
{
    return a+b;
}

class A
{
public:
    A operator+(const A& other)
    {
        A result;
        return result;
    }
};

void foo()
{}
void foo(int)
{}

void abcde(int, double, char, void*)
{}


int main()
{
    A a1;
    A a2;

    add(1, 2);

    add(a1, a2);
}

