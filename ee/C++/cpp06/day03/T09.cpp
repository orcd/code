#include <stdio.h>
#include <vector>
using namespace std;

typedef vector<int> IntVector;

int main()
{
#if 0
    int a[10][20];
    int**p = a+1;
#endif
    //   int* a[20];

    // 嵌套的vector可以用来代替二维数组

    vector< vector<int> > datas;

    {
        IntVector row;
        row.push_back(10);
        row.push_back(20);
        row.push_back(30);
        datas.push_back(row);
    }

    {
        IntVector row;
        row.push_back(30);
        row.push_back(40);
        row.push_back(50);
        datas.push_back(row);
    }

    // 这种写法更加有效率一些
    {
        IntVector row;
        datas.push_back(row);
        IntVector& r = *datas.rbegin();
        r.push_back(70);
        r.push_back(80);
        r.push_back(90);
    }

    datas[1][2] = 1001;
    datas[1][3] = 1002;

    for(auto row=datas.begin(); row!=datas.end(); ++row)
    {
        IntVector& rowData = *row;
        for(auto col = rowData.begin(); col!=rowData.end(); col++)
        {
            printf("%d\n", *col);
        }
    }

}
