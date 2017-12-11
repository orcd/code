#include <stdlib.h>
#include <stdio.h>

// static_cast的用途
// 用于两个类型之间的变量的转换，原则是
// 
// 如果从左到右，可以隐式转换
// 那么从右到左，可以static_cast
//
// TypeA a = static_cast<TypeA>(b)
//
// 1. 第一种情况
// int* --> void*
// void* --static_cast--> int*
int main3()
{
    void* p = malloc(sizeof(int)*100);
    int* pInt = static_cast<int*>(p);
}

// 2.
// 子类的指针，都可以隐式转换成父类指针
// 所以父类指针，可以static_cast成子类指针
//
class P
{};

class C1 : public P
{
    int x, y, z;
};

class C2 : public P
{
    int w, h;
};

int main()
{
    C1 c1;
    P* p = &c1; // 隐式转换
//    C1* pC11 = p;
    C1* pC1 = static_cast<C1*>(p);


    // static_cast的问题，没法分辨类型
    C2* pC2 = static_cast<C2*>(p);
}

// static_cast语法
int main1()
{
    int a;
    char b = 200;
    a = static_cast<int>(b);
    printf("%d\n", a);
}

// 不同类型的指针，不能相互转换，static_cast会报错
class Point
{};

class Size
{};

int main2()
{
    Point p;
//    Size* s = static_cast<Size*>(&p); // 编译报错
}

