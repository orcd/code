#include <stdio.h>

// 1. 隐式转换
//    整形提升：在C中，当两个操作进行运算时（小于int的数），首先把操作数转化成int型；如果精度低的负数，转成int时，高位补符号位
//    算术转换：当两个操作数类型不同，且有的精度大于int，那么精度小于int的数，要先进行整形提升，再进行算术提升转成精度高的操作数
//
// 2. 显式转换
//    a = (Type) b;
//
int main()
{
    // 0xffffffff
    char c;
    char d;
    char e = c + d; 


    double x;
    c + x;

//    char a = 200;


    char a = 200;
    unsigned int b = (unsigned char)a;

    if(b == 200) //          11111111 11111111 11111111  11001000 
    {
        printf("a is 200\n");
    }

}
