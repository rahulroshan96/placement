// APPROACH WITH CONSTANT SPACE COMPLEXITY

#include<iostream>
using namespace std;
int F[1024]={0};
int fib(int n)
{
    int a=0,b=1,sum=0;
    
    for(int i=2;i<=n;i++)
    {
        sum = a+b;
        a = b;
        b = sum;
    }
    
    return sum;
}

int main()
{
    int n = 10;
    cout<<fib(n);
    return 0;
}
