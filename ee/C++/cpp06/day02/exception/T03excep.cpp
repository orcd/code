
#include <stdio.h>

void foo(int arg) throw (int, double)
{
    if(arg == 0)
        throw 1;
    if(arg == 1)
        throw 2;

    if(arg == 2)
        throw "haha error";

    if(arg == 3)
        throw 1.3;

    printf("ok\n");
    return;
}

int main()
{
    int a = 3;

    try // 捕获异常
    {
        foo(a);
    }
    catch(int errorinfo)
    {
        printf("error info = %d\n", errorinfo);
    }
    catch(const char* errorinfo)
    {
        printf("error info=%s\n", errorinfo);
    }
#if 0
    catch(...) // 不管什么异常，都catch
    {
        printf("other error\n");
    }
#endif
}
