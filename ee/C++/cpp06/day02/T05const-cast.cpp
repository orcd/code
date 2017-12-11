
#include <stdio.h>

int main()
{
    int v = 10;
    const int ci = v;   // 让编译器不要优化

//    const int ci = 10; // #define ci 10
   // ci = 20; error
    int* pi = const_cast<int*>(&ci);

    *pi = 20; // ci = 20

    printf("ci = %d\n", ci);
}
