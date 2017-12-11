
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;

#if 0
    // 错误处理，异常处理
    if(a == 0) 
        c == 0;
    else
        int c = b / a;
#endif

    try{
        int* p = new int[4000000000];
        printf("alloc ok\n");
    }
    catch(...)
    {
        printf("error\n");
    }
}
