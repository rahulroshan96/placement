/*Matrix Chain Multiplication 
example: 
A1 = [2,3]
A2 = [3,6]
A3 = [6,4]
A4 = [4,5]
so P array would be P[2,3,6,4,5]
Answer would be (((A1,A2)A2)A3) = the optimal cost would be 124 multiplications

*/

#include<iostream>
int M[1024][1024]={0}; // this matrix will store cost per cell
int S[1024][1024]={0}; // this matrix will store optimal k value
using namespace std;

int Matrix(int P[],int n)
{
    for(int l=2;l<=n;l++) // l is the size of the chain, e.g. A1A2A3A4 are 4 matrix and their chain length is 4
    // this loop runs for length starts from 2 to upto n, where is n is the total number of matrices.
    {
        for(int i=1;i<=n-l+1;i++) // i is the starting index like 1 2 3 4 , 1 is the i and now we have to select j; this loop varies
        {
            int j = i+l-1; // j is the second index upto where we are going to find the multiplication, here e.g. i = 1 and j = 4
            M[i][j] = 10000;
            for(int k=i;k<=j;k++) // k is the intermediate index which flows from i to j, and try to find the optimal combinations.
            {
                int cost = M[i][k]+M[k+1][j]+P[i-1]*P[k]*P[j]; // to select the ith matrix's dimention would be i-1*i from P array
                if(cost<M[i][j])
                {
                    M[i][j] = cost;
                    S[i][j] = k;
                }
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
    {
        cout<<M[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<"Optimal number of multiplications would be "<<M[1][4]; // check this one more time 
    
}

int main()
{
    int size;
    cout<<"enter the size of the P/dimention array\n";
    cin>>size;
    int P[size]; // P is the array that stores the dimentions of n matrices
    cout<<"enter the values of the P array\n";
    for(int i=0;i<size;i++)
    cin>>P[i];
    
    Matrix(P,size-1);    
    
    
    
    
    return 0;
}
