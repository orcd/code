#include <stdio.h>
#include <string>

using namespace std;

class A
{
    A(string& a): second ( a[2])
    {}
    char& second;
};
int main()
{
    string str = "abc";
    char& ch = str[1]; // ch 是b这个字符的引用
    ch = 'x';

    printf("%s\n", str.c_str());

    str = "haha";
    ch = 'y';
    printf("%s\n", str.c_str());

}
