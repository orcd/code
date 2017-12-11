#include <stdio.h>
typedef struct Point
{
    int x;
    int y;
    int z;
} Point;

typedef struct Size
{
    int w;
    int h;
} Size;



// 及其危险的转换
int main()
{
    Size size;
    size.w = 100;
    size.h = 200;

    int padding = 10000;

    Point* p = (Point*)&size;

    p->x = 100;
    p->y = 200;
    p->z = 300; // 

    printf("%d\n", padding);
}
