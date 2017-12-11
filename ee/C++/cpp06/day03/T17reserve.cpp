#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    vector<int> d;
    d.reserve(10000);
    void* ptr = NULL;
    for(int i=0; i<10000; ++i)
    {
        d.push_back(i);
        if(ptr == NULL) ptr = &d[0];
    }

    printf("%p , capacity = %d\n", ptr, (int)d.capacity());

    d.push_back(10);
#if 0
    for(int i=0; i<10000; ++i)
    {
        d.push_back(i);
    }
#endif

    ptr = &d[0];

    printf("%p , capacity=%d\n", ptr, (int)d.capacity());


}
