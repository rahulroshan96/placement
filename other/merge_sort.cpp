/* Selection Sort */
#include<iostream>
using namespace std;
void combine(int [],int,int,int);
void divide(int a[], int low, int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        divide(a,low,mid);
        divide(a,mid+1,high);
        combine(a,low,mid,high);
    }
}
void combine(int a[],int l, int m, int h)
{
    int low = l;
    int mid = m+1;
    int t=low;
    int temp[50];
    while(low<=m && mid<=h) // this will check the comparison between two sub arrays
    {
        if(a[low]<a[mid])
        {
             temp[t] = a[low];
             t++; low++;
        }
        else
        {
            temp[t] = a[mid];
            t++; mid++;
        }
    }
    /* if any subarray is left,so we have to copy that left subarray as it is to temp array */
    if(low>m)  
    {
        while(mid <=h)
        {
            temp[t] = a[mid];
            t++;
            mid++;
        }
    }
    if(mid>h)
    {
        while(low<=m)
        {
            temp[t] = a[low];
            t++;low++;
        }
    }
    for(int i=0;i<=h;i++) // in each combine function we are creating temp array, so we have to copy temp array from 0 to upto high.
    {
        a[i] = temp[i];
    }
}

int main()
{
    int a[8] = {8,7,6,5,4,3,2,1};
    divide(a,0,7);
    for(int i=0;i<8;i++)
    cout<<a[i]<<" ";
    return 0;
}
