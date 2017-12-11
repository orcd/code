#include <stdio.h>

class A
{
    A(){}
    ~A(){}
};

void foo2()
{
    int * p = new int[4000000000];
}

void foo1()
{
    A* a = new A;
    foo2();
    printf("foo2 ok\n");
    delete a; // 没有机会调用
}

void foo()
{
    foo1();

    printf("foo1 ok\n");
}

int main()
{
    try{
    foo();
    }
    catch(...)
    {
        printf("not ok\n");
    }
}
#if 0
int main()
{

    switch(type)
    {
        case CHE:
            break;
        case MA:
            break;
        case PAO:
            break;
        case BING:
            break;
        case JIANG:
            break;
        case SHI:
            break;
        case XIANG:
            break;
        default:
            // 意味这你的代码已经出现飞一般的错误，完全超出预期
            assert(0); 
            break;
    }
}

1. 可以恢复的错误
2. 无法恢复的错误：声卡打不开
3. 特别二的错误：明明象棋中没有别的棋子，程序却告诉我有
#endif

#if 0
错误处理方法
#endif

#if 0
int foo()
{
    int wlan_handle;
    int ret = open_wlan(arg1, arg2, &wlan_handle);
    if(ret != 0)
    {
        log("open_wlan error ret=%d\n", ret);
        return -1;
    }

    ret = write_wlan(wlan_handle, data, size);
    if(ret <= 0)
    {
        log ...
            return -2;
    }
}
#endif

#if 0
int foo()
{
    try{
        int wlan_handle;
        open_wlan(arg1, arg2, &wlan_handle);
        write_wlan(wlan_handle, data, size);
        return 0;
    }
    catch (...) // 集中式的错误处理
    {
        return -1;
    }
}
#endif













