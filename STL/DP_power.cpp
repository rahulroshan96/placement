#include<iostream>

using namespace std;

int power(unsigned long long int x,unsigned long long int y)
{
    if(x == 0) return 1;
    else if (y == 1) return x;
    else
    {
        unsigned long long int temp = power(x,y/2);
        if(y%2 == 0)
        return temp*temp;
        else
        return x*temp*temp;
    }
}


int main()
{
    unsigned long long int x,y;
    cin>>x>>y;

    cout<<power(x,y);

    return 0;
}

