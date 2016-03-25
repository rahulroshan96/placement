#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;
void BellmanFord(vector<vector<int> > &myv, int n, vector<int> &adj, vector<int> &parent, int S)
{
    queue<int> myQ;
    for(int i=0;i<n;i++)
    {
        myQ.push(i);
        while(!myQ.empty())
        {
            int u = myQ.front();
            myQ.pop();
            for(int v=0;v<n;v++)
            {
                if(myv[u][v] && adj[u]+myv[u][v] < adj[v])
                {
                    adj[v] = adj[u]+myv[u][v];
                    myQ.push(v);
                    parent[v] = u;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<adj[i]<<" ";
    }
}
int main()
{
/*
    0,5,0,-2,0,0
    0,0,1,0,0,0
    0,0,0,2,7,3
    0,2,0,0,3,0
    0,0,0,0,0,10
    0,0,0,0,0,0
  */

    int n;
    cout<<"enter number of vertices"<<endl;
    cin>>n;
    vector<vector<int> > myv(n,vector<int>(n));
    cout<<"enter matrix values"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>myv[i][j];
        }
    }
    vector<int> parent(n);
    vector<int> adj(n,INT_MAX);
    adj[0]=0;
    BellmanFord(myv,n,adj,parent,0);
    return 0;
}
