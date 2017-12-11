#include <iostream>  
using namespace std;  
  
template<int num>  
struct fib  
{  
    enum {result = fib<num-1>::result + fib<num-2>::result};  
};  
  
template<>  
struct fib<0>  
{  
    enum {result=1};  
};  
  
template<>  
struct fib<1>  
{  
    enum{ result=1};  
};  
  
int main()  
{  
    cout<< fib<1>::result <<endl;  
    cout<<fib<2>::result<<endl;  
    cout<<fib<3>::result<<endl;  
    cout<<fib<4>::result<<endl;  
    cout<<fib<5>::result<<endl;  
    cout<<fib<6>::result<<endl;  
    ///...  
    cout<<fib<20>::result<<endl;  
    cout<< fib<30>::result <<endl;  
  
    return 0;  
}  
