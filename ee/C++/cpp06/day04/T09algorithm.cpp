
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <numeric>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

#if 0
    for(auto it =v.begin(); it!=v.end(); ++it)
    {

    }
#endif

    for_each(v.begin(), v.end(), [](int& value){
        printf("%d\n", value);
    });

#if 0
    vector<int> v2;
    v2.resize(3);
    transform(v.begin(), v.end(), v2.begin(), [](int a){return a*a;});
    for_each(v2.begin(), v2.end(), [](int& value){
        printf("%d\n", value);
    });
#endif
    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);

    vector<int> v3;
    v3.resize(3);
    transform(v.begin(), v.end(), v2.begin(), v3.begin(),
              [](int a, int b){return a-b;});
    for_each(v3.begin(), v3.end(), [](int& value){
        printf("%d\n", value);
    });

    set<string> ss;
    ss.insert("tom");
    ss.insert("jack");
    ss.insert("xiaowang");
    auto it = find(ss.begin(), ss.end(), "xiaowang");
    if(it != ss.end())
    {
        printf("find xiaowang\n");
    }
    else
    {
        printf("not find xiaowang\n");
    }

    {
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(2);
        v.push_back(3);
        auto it = adjacent_find(v.begin(), v.end());
        printf("%d\n", *it++);
        printf("%d\n", *it++);

        it = find_if(v.begin(), v.end(), [](int a){return a == 3;});
        printf("%d\n", *it);
    }

    {
        vector<int>v1 = {1, 2, 3};
        vector<int> v2 = {1, 2, 3};
        vector<int> v3;

        v3.resize(6);
        merge(v1.begin(), v1.end(),
              v2.begin(), v2.end(),
              v3.begin(), [](int a, int b){return a+b;});


        sort(v3.begin(), v3.end(), [](int a, int b){return a>b;});

        random_shuffle(v3.begin(), v3.end(), [](ptrdiff_t max)->ptrdiff_t{
            double temp;
            temp = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
            return static_cast<ptrdiff_t>(temp * max);
        });

        for_each(v3.begin(), v3.end(), [](int& value){
            printf("%d\n", value);
        });

        vector<int> v4;
        copy(v3.begin(), v3.end(), back_inserter(v4));
    }

    {
        vector<int>v1 = {1, 2, 3};
        vector<int> v2 = {1, 2, 3};
        vector<int> v3;
        merge(v1.begin(), v1.end(),
              v2.begin(), v2.end(),
              back_inserter(v3));
        printf("back_inserter \n");
        for_each(v3.begin(), v3.end(), [](int& value){
            printf("%d\n", value);
        });

#if 0
        find_if(v3.begin(), v3.end(), [](int& v){
            if(v == 1) v=100;
            return false;
        });
#endif
        replace_if(v3.begin(), v3.end(), [](int a){
            if(a == 1) return true;
            return false;
        }, 100);
        for_each(v3.begin(), v3.end(), [](int& value){
            printf("%d\n", value);
        });

        int sum = accumulate(v3.begin(), v3.end(), 1, [](int a, int b){
            return a*b;
        });
        printf("%d\n", sum);




    }
    {
#if 1
        vector<int>v1 = {1, 2, 3};
        vector<int> v2 = {1, 2, 3};
        set<int> v3;
        merge(v1.begin(), v1.end(), v2.begin(), v2.end(), inserter(v3, v3.end()));
        printf("merge to set\n");
        for_each(v3.begin(), v3.end(), [](int a){
            printf("%d\n", a);
        });
#endif
    }
    {
        set<int> a;
        set<int> b;
        set<int> c;

        a.insert(1);
        a.insert(2);
        b.insert(1);
        b.insert(3);

        set_intersection(a.begin(), a.end(),
                         b.begin(), b.end(), inserter(c, c.end()));
        printf("set_intersection to set\n");
        for_each(c.begin(), c.end(), [](int a){
            printf("%d\n", a);
        });

        c.clear();
        set_union(a.begin(), a.end(),
                  b.begin(), b.end(), inserter(c, c.end()));
        printf("set_union to set\n");
        for_each(c.begin(), c.end(), [](int a){
            printf("%d\n", a);
        });

        c.clear();
    //    set_difference(a.begin(), a.end(),
    //                   b.begin(), b.end(), inserter(c, c.end()));
        set_difference(b.begin(), b.end(),
                       a.begin(), a.end(), inserter(c, c.end()));
        printf("set_difference to set\n");
        for_each(c.begin(), c.end(), [](int a){
            printf("%d\n", a);
        });
    }

}
