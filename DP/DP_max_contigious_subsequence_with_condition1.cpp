#include<iostream>

using namespace std;

int max_sum(int a[], int n)
{
    int M[n+1]={0};
    M[0] = a[0];
    M[1] = max(a[0],a[1]);
    for(int i=2;i<n;i++)
    {
        M[i] = (M[i-1]>M[i-2]+a[i]?M[i-1]:M[i-2]+a[i]);
    }
    //for(int i=0;i<n;i++)
    //cout<<M[i]<<" ";
    return M[n-1];
    
}

int main()
{
    int a[] = {-1,-2,4,16,9};
    int size = sizeof(a)/sizeof(int);
    cout<<max_sum(a,size);
    
    return 0;
}
