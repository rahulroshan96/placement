#include<iostream>
using namespace std;

void findbars(int *a, int size, int *left, int *right)
{
    int i=0,j=size-1;
    int mleft=0,mright=0;
    while(i<j)
    {
       if(a[i]> mleft)
        {
            mleft = a[i];
            *left = i;
        }

       if(a[j]> mright)
        {
            mright = a[j];
            *right = j;
        }
        i++;j--;
    }
}

int findwater(int *a, int size, int left, int right)
{
    int i=left, j = right;
    int min_bar = min(a[left],a[right]);
    int sum = (j-i-1)*min_bar;
    for(int k=left+1;k<right;k++)
    {
        sum-=a[k];
    }
    return sum;
}

int main()
{
    int a[] = {2,0,2};
    int size = sizeof(a)/sizeof(int);
    int left=0,right=0;
    findbars(a,size,&left,&right);
    cout<<findwater(a,size,left,right);

    return 0;
}
