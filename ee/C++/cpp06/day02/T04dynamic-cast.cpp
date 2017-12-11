
#include <stdio.h>
#include <iostream>

class F
{
    virtual void foo(){}
};

class C1 : public F
{};

class C2 : public F
{};

int main()
{
    C1 c1;
    F* p = &c1;

//    C2* pC2 = static_cast<C2*>(p);  // 其实没有检查到类型，不安全
    C2* pC2 = dynamic_cast<C2*>(p); 

    if(pC2 == nullptr) // pC2结果是null，就是意味着转换失败了
    {
        printf("pC2 is NULL\n");
    }
}
