#include<iostream>
#include<vector>
using namespace std;

int isSafe(vector<vector< int> >&myv, vector<vector<int> > &visited, int i, int j, int N)
{
    return (i>=0 && i<N && j>=0 && j<N && !visited[i][j]);
}

void DFS(vector<vector<int> > &myv, vector<vector<int> > &visited, int i, int j, int N)
{
    visited[i][j] = 1;
    int row[] = {-1, 0, 1, 0};
    int col[] = {0, 1, 0, -1};

    for(int k=0;k<4;k++)
    {
        if(isSafe(myv,visited,i+row[k],j+col[k],N))
            DFS(myv, visited, i+row[k],j+col[k],N);
    }

}



int island(vector<vector<int> > myv, int N)
{
    int count;
    vector<vector<int> > visited(N,vector<int> (N,0));

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(myv[i][j] && !visited[i][j])
            {
                DFS(myv, visited, i, j, N);
                count++;
            }
        }
    }
    return count;

}

int main()
{
    vector<vector<int> > myv;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        vector<int> local;
        for(int i=0;i<N;i++)
        {
            int x;
            cin>>x;
            local.push_back(x);
        }
        myv.push_back(local);
    }

    cout<<island(myv,N);


    return 0;
}
