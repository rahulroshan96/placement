#include<iostream>
#include<string.h>
#include<vector>
#define ROW 5
#define COL 5
using namespace std;

int isSafe(vector<vector<int> > &myv, int i, int j, vector<vector<int> > &visited)
{
    return (i>=0 && i<ROW && j>=0 && j<COL && myv[i][j]&& !visited[i][j]);

}


void DFS(vector<vector<int> > &myv, int i, int j, vector<vector<int> > &visited)
{
    visited[i][j] = 1;

    int row[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    int col[] = {-1,  0,  1, -1, 1, -1, 0, 1};

    for(int k=0;k<8;k++)
    {
        if(isSafe(myv,i+row[k],j+col[k],visited))
        {
            DFS(myv,i+row[k],j+col[k],visited);
        }
    }
}

int island(vector<vector<int> > myv,int n)
{
    int count =0;
    vector<vector<int> > visited(n,vector<int>(n,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(myv[i][j] && !visited[i][j])
            {
                DFS(myv, i,j,visited);
                count++;
            }
        }
    }
    return count;

}
int main()
{
    vector<vector<int> > myv;
    for(int i=0;i<5;i++)
    {
        vector<int> local;
        for(int j=0;j<5;j++)
        {
            int x;
            cin>>x;
            local.push_back(x);
        }
        myv.push_back(local);
    }

    cout<<island(myv,5);

    return 1;
}
