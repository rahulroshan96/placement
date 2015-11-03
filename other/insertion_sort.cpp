/* Insertion Sort */
#include<iostream>
using namespace std;
void insertion(int a[],int n)
{
    int k = 1;
    for(int k=1;k<=n-1;k++) // this loop will select the number we want to sort in the already sorted array
    {
        int temp = a[k];
        int i;
        for(i = k-1;i>=0;i--) // loop will travel until i finds the index where temp is greater than that index.
        {
            if(a[i]>temp)
            a[i+1] = a[i];
        }
        a[i+1] = temp;
    }
}

int main()
{
    int a[8] = {8,7,6,5,4,3,2,1};
    insertion(a,8);
    for(int i=0;i<8;i++)
    cout<<a[i]<<" ";
    return 0;
}
