#include<iostream>
#include<algorithm>
using namespace std;

int m (int a, int b)
{
    return (a<b)?a:b;
}

int minCoins(int coins[],int n,int sum)
{
    // the 2D array will store row as number of coins and columns as desired sum 
    // e.g. minimum[0][5] means total number of minimum coins with 0th coins that sums up to 5;
    // e.g. minimum[2][5] means total number of minimum coins with 0th, 1st and 2nd coins that sums up to 5;
    int minimum[n][sum+1]; 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(j==0) minimum[i][j] = 0;
            else
            {
                // this coindition means if we are taking the coin
                if(j>=coins[i])
                {
                    // minimum[i][j] would be minimum of (taking the current sum - current coin + 1 and upto previous coins with the current sum)
                    minimum[i][j] = m(minimum[i][j-coins[i]]+1, minimum[i-1][j]); // minimum of ( taking the coin, not taking the coin)
                }
                else // this condition means if we are not taking the coin
                {
                    minimum[i][j] = minimum[i-1][j];
                }
            }
        }
    }
    return minimum[n-1][sum];

}

int main()
{
    int coins[4] = {1,5,6,8};
    cout<<"minimum number of coins "<<minCoins(coins,4,11);
    return 0;
}
