#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    string str;
    char buf1[] = "hello";
    char buf2[] = "world";

    copy(&buf1[0], &buf1[sizeof(buf1)-1], back_inserter(str));
    copy(&buf2[0], &buf2[sizeof(buf2)-1], back_inserter(str));

    printf("%s\n", str.c_str());
}
