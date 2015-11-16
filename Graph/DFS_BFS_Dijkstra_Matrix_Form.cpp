#include<iostream>
#include<limits.h>
#include<stack>
#include<vector>
#include<queue>
using namespace std;
struct priority
{
    int operator()(pair<int,int> &p1, pair<int,int> &p2)
    {
        return p1.second > p2.second;
    }
};
void bfs(vector<vector<int> > &matrix, int x, int N, vector<int> &visited)
{
    queue<int> myQ;
    myQ.push(x);
    visited[x] = true;
    while(!myQ.empty())
    {
        int u = myQ.front();
        cout<<u<<" ";
        myQ.pop();
        for(int i=0;i<N;i++)
        {
            if(matrix[u][i] && !visited[i])
            {
                visited[i] = true;
                myQ.push(i);
            }
        }
    }
}

void dfs(vector<vector<int> > &matrix, int x, int N, vector<int> &visited)
{
    cout<<x<<" ";
    for(int i=0;i<N;i++)
    {
        if(matrix[x][i] && !visited[i])
        {
            dfs(matrix, i, N, visited);
        }
    }
}
void dijkstra(vector<vector<int> > &matrix, int x, int N, vector<int> &path, vector<int> &pred)
{
    priority_queue<pair<int,int>, vector<pair<int,int> >,priority> myQ;
    myQ.push(make_pair(x,0));

    while(!myQ.empty())
    {
        int u = (myQ.top()).first;
            int u_r = (myQ.top()).second;
            myQ.pop();
        for(int i=0;i<N;i++)
        {

            if((matrix[u][i]) && (path[u]+matrix[u][i] < path[i]))
            {
                path[i] = path[u]+matrix[u][i];
                myQ.push(make_pair(i,matrix[u][i]));
            }
        }
    }

}
int main()
{

    vector<vector<int> > matrix;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        vector<int> local;
        for(int j=0;j<N;j++)
        {
            int x;
            cin>>x;
            local.push_back(x);
        }
        matrix.push_back(local);
    }
    vector<int> bfs_visited(N,false);
    bfs(matrix,0,N,bfs_visited);
    cout<<endl;
    vector<int> dfs_visited(N,false);
    dfs(matrix,0,N,dfs_visited);
    cout<<endl;
    vector<int> path(N,INT_MAX);
    path[0] = 0;
    vector<int> pred(N,-1);
    dijkstra(matrix,0,N,path,pred);

    for(int i=0;i<N;i++)
    {
        cout<<"0 to "<<i<<" is "<<path[i]<<endl;
    }
    return 0;
}
