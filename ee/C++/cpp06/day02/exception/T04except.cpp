
#include <stdio.h>

void foo1()
{
    throw 1.3;
}

void foo()
{
    try
    {
        foo1();
    }
    catch(int err)
    {
        printf("err is %d\n", err);
    }
}

int main()
{
    try
    {
        foo();
    }
    catch(...)
    {
        printf("error\n");
    }
}
