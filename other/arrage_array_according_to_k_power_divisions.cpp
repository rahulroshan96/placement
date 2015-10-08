#include <iostream>
//#include <stdio>
#include <cstring>

using namespace std;


void findk(int arr[], int n, int k)
{
    int test[10];
    int i;
    int c,x;
    for(i=0;i<10;i++)
    test[i] = -1;

    for(i=0;i<n;i++)
    {
        c = 0;
        x = arr[i];
        while(x%k == 0 && x>0)
        {
            x = x/k;
            c++;
        }
        test[c] = arr[i];
        c = 0;

    }

    for(i=0;i<10;i++)
    {
        if(test[i]!=-1)
        cout<<test[i]<<' ';
    }
}


int main()
{
    int arr[] = {216, 1296, 36, 7776, 6};

    findk(arr,5,6);

return 0;
}
