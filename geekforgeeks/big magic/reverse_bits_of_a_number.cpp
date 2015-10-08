#include<iostream>

using namespace std;

int main()
{
    int n=2;
    int temp=0;

    int m =0;
    int i = sizeof(int)*8;

    while(i!=0)
    {
        temp = n&1;
        n>>=1;

        if(temp == 1)
        m^=1;

        m<<=1;

        temp=0;

        --i;
    }

    cout<<n<<" "<<m<<endl;
    return 0;
}
