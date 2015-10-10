#include<iostream>
#include<vector>
#include<array>



using namespace std;

int main()
{
    int A[]={-2,1,2,3,-7,1,5};
    int csum=0,sum=0;
    int i=0;
    int m=0,n=0;
    int x=0,y=0;
    int size = sizeof(A)/sizeof(int);
    while(i<size)
    {
        if(A[i]>-1)
        {

            csum+=A[i];


            if(csum == sum)
            {
                if(csum > sum)
                {
                    sum = csum;
                    n=y;
                    m=x;
                }
                else
                {
                    if((y-x)>(n-m))
                    {
                        n=y;
                        m=x;
                    }
                }
            }
            else
            {
                if(csum > sum)
                {
                    sum = csum;
                    n=y;
                    m=x;
                }
            }
            y++;


        }
        else
        {
            csum=0;
            x=i+1;
            y=i+1;

        }
        i++;
    }
    for(int i =m;i<=n;i++)
    cout<<A[i]<<" ";

    //int *B = (int *)malloc((n-m+1)*sizeof(int));
    //int *B=allocate((n-m+1));
    /*
    int *B;
    int t = (n-m+1);
    B = (int*)calloc (t,sizeof(int));
    int l=0;
    int j=0;
    for(l=m;l<=n;l++)
    {
        B[j] = A[l];
        cout<<B[j]<<" ";
        j++;
    }
*/
    return 0;
}
