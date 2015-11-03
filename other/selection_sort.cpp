/* Selection Sort */
#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selection(int a[],int n)
{
    for(int i=0;i<=n-2;i++) // if i = 5, that means upto 5 elements has been sorted,so we won't be bother about elements before 5
    {
        int min = i;
        for(int j=i+1;j<=n-1;j++) // this loop will bother about elements after 5
        {
        if(a[j]<a[min])
            min = j;
        }
        swap(a[min],a[i]);
    }
}

int main()
{
    int a[8] = {8,7,6,5,4,3,2,1};
    selection(a,8);
    for(int i=0;i<8;i++)
    cout<<a[i]<<" ";
    return 0;
}
