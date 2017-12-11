#include <stdio.h>

int main()
{
    int a = 6356652;
    printf("&a = %d\n", &a); //6356652
    printf("a = %d\n", a);
    //a是int类型，就是传统+运算，+1就是+1
    //&a是int *类型，int *指向int, +1, +sizeof(int)
    printf("%d, %d\n", a+1, &a+1);

    return 0;
}

int main01(void)
{
    int b;
    printf("&b = %d\n", &b); //6356648

    *(int *)6356648 = 111;
    *(&b) = 222;
    printf("b = %d\n", b);

    int a = 6356648;
    *(int *)a = 333;
    printf("b = %d\n", b);

    return 0;
}

