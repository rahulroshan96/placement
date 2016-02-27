#include<iostream>
#include<algorithm>
using namespace std;
// Longest Increasing Subsequence

int LIS(int *A, int n)
{
    int t=1;
    int temp[n];
    for(int x=0;x<n;x++)
        temp[x] = 1;


    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            // if this case (temp[i] < temp[j]+1)  violates that means j is an element which is less than i
            // but the elements before j that were compared to i and succeed case 1 are greater than than j
            // e.g. 3,4,-1,6 here i=6 and j=-1 temp array is 1,2,1,3
            if(A[i]>A[j] && temp[i]<temp[j]+1)
            {
                temp[i] = temp[j]+1;
                if(t<temp[i]) t = temp[i];
            }

        }
    }
    return t;
}

int main()
{
    int N[8] = {3,4,-1,0,6,2,3,-100};
    cout<<"The longest Increasing Subsequence is "<<LIS(N,8);
}
