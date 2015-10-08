#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int Z[7] = { 1, 2, 5, -7, 2, 5};


    vector <int> A(Z,Z+sizeof(Z)/sizeof(int));

    int sum=0,sum1=0,length=0,length1=0,index=0,index1=0;

    int i;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>=0)
        {
            if(A[i-1]<0) index1 = i;
            sum1 += A[i];
            length1++;
        }
        else
        {
            if(sum1 == sum) // sum is tie
            {

                if(length1 == length) // length is tie
                {
                    if(index1 > index) // if local index is less then global index
                    {
                        index = index1;
                        sum = sum1;
                        length = length1;
                        sum1=0;


                    }
                    else
                    {
                        // do nothing
                    }
                }
                else // length is not tie
                {
                    if(length1 > length)
                    {
                        index = index1;
                        sum = sum1;
                        length = length1;
                        sum1=0;
                        length1 = 0;

                    }
                    else
                    {
                        //do nothing
                    }
                }
            }
            else // sum is not tie
            {

                if(sum1 > sum)
                {
                       index = index1;
                        sum = sum1;
                        length = length1;
                        sum1=0;

                        length1=0;

                }
                else
                {
                    //do nothing

                }
            }


        }
    }

    if(i==A.size())
    {
        if(sum1 == sum) // sum is tie
            {

                if(length1 == length) // length is tie
                {
                    if(index1 > index) // if local index is less then global index
                    {
                        index = index1;
                        sum = sum1;
                        length = length1;
                        sum1=0;


                    }
                    else
                    {
                        // do nothing
                    }
                }
                else // length is not tie
                {
                    if(length1 > length)
                    {
                        index = index1;
                        sum = sum1;
                        length = length1;
                        sum1=0;
                        length1 = 0;

                    }
                    else
                    {
                        //do nothing
                    }
                }
            }
            else // sum is not tie
            {

                if(sum1 > sum)
                {
                       index = index1;
                        sum = sum1;
                        length = length1;
                        sum1=0;

                        length1=0;

                }
                else
                {
                    //do nothing

                }
            }


    }

    int m = index;
    while(A[m]>=0 && m<A.size())
    {
      //  printf("%d ",A[m]);
        cout<<A[m]<<' ';
        m++;
    }
    return 0;
}
