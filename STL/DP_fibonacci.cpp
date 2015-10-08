#include<iostream>

using namespace std;

int main()
{
    int n,last,secondlast=1,thirdlast=1;
    cin>>n;

    if(n == 1 || n==2) last = 1;
    else
    for(int i = 1;i<=n-2;i++)
    {
        last = secondlast + thirdlast;
        thirdlast = secondlast;
        secondlast = last;
    }

    cout<<last;

    return 0;
}
