#include<iostream>
#include<vector>
using namespace std;

 // e.g. 2,3,7,8,10 and 11 is the sum, is there any combination available in myv to get sum 11 ?
bool subset(vector<int> myv, int n, int sum)
{
    vector<vector<bool>> M(n, vector<bool>(sum+1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(j == 0) M[i][j] = true;
            else
            M[i][j] = false;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=sum;j++)
        {

            if(myv[i]<=j) // means if myv[i] <= sum then we can take that number
            {
                if(j-myv[i] > 0 && (i-1)>=0) // this is for row 1,2 and so on
                    M[i][j] = (M[i-1][j] || M[i][j-myv[i]]);
                else if(j>myv[i]) // this condition is for row 0
                    M[i][j] = false;
                else // this condition is for row 0 for getting true only one time, when first time M[0][j] == true
                    M[i][j] = M[i][j-myv[i]];
            }
            else
            {
                if((i-1)>=0) M[i][j] = M[i-1][j];
                else M[i][j] = false;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=sum;j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
    return M[n-1][sum];

}
int main()
{
    int a[5] = {2,3,7,8,10};
    vector<int> myv(a,a+5);
    if(subset(myv,5,11))
        cout<<"Yes the sum is available";
    else cout<<"No the sum is not available";
    return 0;
}
