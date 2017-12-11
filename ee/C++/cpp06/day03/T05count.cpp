
#include <stdio.h>
#include <list>
#include <algorithm> //
using namespace std;

int main()
{
    list<int> a;
    a.push_back(5);
    a.push_back(10);
    a.push_back(5);
    a.push_back(5);

    auto it = a.begin();
    it++;

    int c = count(it, a.end(), 5);
//    int c = count(a.end(), a.begin(), 5);

    printf("c is %d\n", c);
}
