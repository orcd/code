
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;
int main()
{
    string a = "hello";
    vector<char> b(a.begin(), a.end());

    printf("%s\n", (char*)b.data());

    int ds[] = {1, 2, 3, 4, 5};
    vector<int> v(&ds[0], &ds[5]);

    auto it = v.begin();
    v.insert(it, 1, 10);
    for(auto it=v.begin(); it != v.end(); ++it)
    {
        printf("%d\n", *it);
    }


    int firstData = v.front(); // firstData --> 1
    int lastData = v.back(); // lastData --> 5
    printf("%d, %d\n", firstData, lastData);



    vector<int> v1;
    v1.reserve(1000);
    printf("size is %d, capacity=%d\n", (int)v1.size(), (int)v1.capacity());

    v.swap(v1);



    for(auto it=v.begin(); it != v.end(); ++it)
    {
        printf("%d\n", *it);
    }
}
