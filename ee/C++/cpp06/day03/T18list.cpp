#include <list>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    list<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(20);

    auto it = a.begin(); // it --> 10
    a.push_front(50); // 50 -> 10 -> 20 -> 30

//    a.sort();
//    a.reverse();

    std::sort(a.begin(), a.end(), [](int x, int y){return x-y;});
    for(auto it = a.begin(); it!= a.end(); ++it)
    {
        printf("%d\n", *it);
    }
    a.remove(20);



    printf("%d\n", (int)a.size());

    // 链表在遍历时，删除元素，一样会段错误
    for(auto it = a.begin(); it!= a.end(); ++it)
    {
        if(*it == 20)
        {
            a.erase(it);
        }
    }
}
