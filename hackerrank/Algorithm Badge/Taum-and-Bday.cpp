#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long int T,B,W,X,Y,Z,sum=0,sum1=0;
    cin>>T;

    while(T!=0)
        {

    cin>>B>>W;
    cin>>X>>Y>>Z;

    if(Z<X || Z<Y)
        {
        if(Z<X)
            {
            if(X<Y) // X is less costly
                {
                    sum = B*X + W*X + W*Z;
                    sum1 = B*X + W*Y;
                sum = min(sum,sum1);
            }
            else // Y is less costly
                {
                sum = B*Y + W*Y + B*Z;
                sum1 = B*X + W*Y;
                sum = min(sum,sum1);
            }
        }
        else // Z<Y
            {

            if(X<Y) // X is less costly
                {
                sum = B*X + W*X + W*Z;
                sum1 = B*X + W*Y;
                sum = min(sum,sum1);
            }
            else // Y is less costly
                {
                sum = B*Y + W*Y + B*Z;
                sum1 = B*X + W*Y;
                sum = min(sum,sum1);
            }

        }
    }
    else // Z is not at all small than X or Y
        {
        sum = B*X + W*Y;
    }

    cout<<sum<<endl;

        T--;
    }

    return 0;
}
