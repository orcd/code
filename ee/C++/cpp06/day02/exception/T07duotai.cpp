#include <stdio.h>

class F
{
    public:
        virtual void foo()
        {
            printf("F::foo()\n");
        }
};

class C : public F
{
    public:
        virtual void foo()
        {
            printf("C::foo()\n");
        }
};

int main()
{
    C c;
    F& f = c; 
    f.foo(); // 子类

    F* pf=&c;
    pf->foo(); // 子类
}
