
#include <stdio.h>
#include <vector> 
#include <list>
using namespace std;
//[1, 2]
//[1 ,2, 3]
//[1, 2, 3, 4]

int main()
{
    list<int> datas;

    datas.push_back(10);
    datas.push_back(20);   // 10, 20
    datas.push_back(30);   // 10, 20, 30

    // list<int>::iterator it = datas.begin();

    auto it = datas.begin();
    for(; it!=datas.end(); ++it)
    {
        int value = *it;
        printf("%d\n", value);
    }


}
