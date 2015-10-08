

#include<iostream>

using namespace std;

int powerof2(unsigned int n)
{
    unsigned int c=0;
    if(n && !(n&(n-1)))
        {

            return n;
        }

        {
            while(n!=0)
            {
                n=n>>1;
                c=c+1;

            }
        }
        return 1<<c;
}

int main()
{
    unsigned int n = 5;
    cout<<powerof2(n)<<endl;
    //cout<<(3<<2);//means shifting left, 3 two times

    return 0;
}

