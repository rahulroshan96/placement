// BOTTOM UP APPROACH

#include<iostream>
using namespace std;
int F[1024]={0};
int fib(int n)
{
    F[0] = 0;
    F[1] = 1;
    if(n == 0) return 0;
    if(n == 1) return 1;
    else
    {
    for(int i=2;i<=n;i++)
    F[i] = F[i-1] + F[i-2];
    }
    return F[n];
}

int main()
{
    int n = 10;
    cout<<fib(10);
    return 0;
}
