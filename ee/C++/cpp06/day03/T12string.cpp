#include <stdio.h>
#include <string>
using namespace std;

void foo(string str)
{}

void foo1(const char* p)
{}

int main()
{
    string str;
    str.push_back('a');
    str.push_back('b');
    str.push_back('c');
    str.push_back('\0');
    str.push_back('d');


    string str2(str);

    string str3;
    str3 = str;

    char* p = const_cast<char*>(str.c_str());
    p[0]  ='x';

   // str[0] = 'x';

    printf("%d, %d\n", (int)str.size(), (int)str.capacity());

    int ch = str[100];
    str[10000] = 100;
    ch = str[10000];

    printf("%d, %d\n", (int)str.size(), (int)str.capacity());

    printf("%s, ch=%d\n", str3.c_str(), (int)ch);

    foo("haha");
    foo1(str); 


}



