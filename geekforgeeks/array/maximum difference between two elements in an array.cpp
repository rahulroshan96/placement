/**find the maximum difference between two elements in an array, where first elemenet is less than second element**/

#include<iostream>
using namespace std;

int main()
{
    int a[9] = {1,5,10,21,51,2,7,9,10};

    int min = a[0];

    int i =1;
    while(a[0]>a[i])
    {
        i++;
    }
    int diff = a[i] - a[0];

    int size = sizeof(a)/sizeof(int);
    while(i!=size-1)
    {
        if(min < a[i])
        {
            if((a[i]-min)>diff)
                {
                    diff = a[i]-min;
                }

        }
        else
        {
            min = a[i];

        }
        i++;
    }
    cout<<diff<<endl;


    return 0;
}
