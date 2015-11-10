// TOP DOWN APPROACH

#include<iostream>
using namespace std;
int F[1024]={0};
int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    else
    {
        if(F[n] != 0) return F[n];
        else 
        return F[n] = fib(n-1) + fib(n-2);
    }
}

int main()
{
    int n = 10;
    cout<<fib(6);
    return 0;
}
