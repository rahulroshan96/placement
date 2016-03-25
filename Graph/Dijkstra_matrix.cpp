#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;

struct priority
{
    bool operator()(pair<int,int> &a, pair<int,int> &b)
    {
        return a.second > b.second;
    }
};
void dijkstra(vector<vector<int> > &myv, int n, int S, vector<int> &adj)
{
    priority_queue<pair<int,int>, vector<pair<int,int> >, priority> myQ;
    myQ.push(make_pair(S,0));
    while(!myQ.empty())
    {
        int u = (myQ.top()).first;
        int w = (myQ.top()).second;
        for(int v=0;v<n;v++)
        {
            if(myv[u][v] && (myv[u][v]+adj[u]) < adj[v])
            {
                adj[v] = myv[u][v] + adj[u];
                myQ.push(make_pair(v,adj[v]));
            }
        }
        myQ.pop();
    }
        for(int i=0;i<n;i++)
        {
            cout<<adj[i]<<" ";
        }
}
int main()
{
    int n;
    cout<<"enter number of vertices"<<endl;
    cin>>n;
    vector<vector<int> > myv(n,vector<int>(n));
    //vector<vector<int> > myv({0,5,-2,0,0,0},{0,0,1,0,0,0},{0,0,0,2,7,3},{0,2,0,0,3,0},{0,0,0,0,0,10},{0,0,0,0,0,0});
    cout<<"enter matrix values"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>myv[i][j];
        }
    }
    //vector<int> parent(n);
    vector<int> adj(n,INT_MAX);
    adj[0]=0;
    dijkstra(myv,n,0,adj);
    return 0;
}
