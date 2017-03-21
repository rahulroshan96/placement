/*
what must be the maximum sum to win the player !!!
*/

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int N=6; 
vector<int> p; 
int cache[1024][1024];

     
int profit(int be, int en) {
  if (be > en)
    return 0;
    
  if (cache[be][en] != -1)
    return cache[be][en];
    
  return max(max(profit(be+2, en) + p[be],profit(be+1, en-1) + p[be]), max(profit(be,en-2)+p[en], profit(be+1,en-1)+p[en]));
}
int main()
{
    p.push_back(6);
    p.push_back(2);
    p.push_back(3);
    p.push_back(4);
    p.push_back(5);
    p.push_back(1);

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cache[i][j] = -1;
        }
    }

    cout<<profit(0,5);
    return 0;
}
