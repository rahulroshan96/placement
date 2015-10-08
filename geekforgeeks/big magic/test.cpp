#include<iostream>

using namespace std;

int powerof2(unsigned int n)
{
    unsigned int c;
    if(n && !(n&(n-1)))
        return n;

        {
            while(n!=0)
            {
                n>>=1;
                c=c+1;
            }
        }
        return 1<<c;
}

int main()
{
    unsigned int n =0;
    cout<<powerof2(n);

    return 0;
}
