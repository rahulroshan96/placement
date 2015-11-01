#include <iostream>
#include <limits.h>

int find_max(int a[],int n)
{
    int max_total = 0, max = 0;
    int count = 0;
    int t=INT_MIN;
    for(int i=0;i<n;i++) // special case when all the numbers are negetive 
    {
        if(a[i]<=0) count++;
        if(a[i]>t) t = a[i];
    }
    if(count == n) return t;
    
    
    if(a[0]>0) max = a[0];
    for(int i=1;i<n;i++)
    {
        max += a[i];
        if(max < 0 ) max = 0;
        if(max > max_total) max_total = max;
    }
    return max_total;
}

using namespace std;
int main()
{
    int a[] = {-2,11,-4,13,-5,2};
    //int a[] = {-2,-3,-4,-5,-6,-7}; // test case when all numbers are negetive 
    int size = sizeof(a)/sizeof(int);
    cout<<find_max(a,size);
    return 0;
}
