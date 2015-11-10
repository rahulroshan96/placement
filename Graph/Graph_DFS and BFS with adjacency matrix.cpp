/* DFS and BFS with adjacenty matrix */
#include<iostream>
#include<queue>

int adj[1024][1024];    
int flags[5]={0};
using namespace std;
void BFS(int v,int N)
{
    queue<int> myQ;
    myQ.push(v);
    flags[v] = 1;
    while(!myQ.empty())
    {
        int u = myQ.front();
        cout<<u<<" ";
        myQ.pop();
        for(int i=0;i<N;i++)
        {
            if(adj[u][i] && flags[i]!=1)
            {
                flags[i] = 1;
                myQ.push(i);
            }
        }
    }
    
}

void DFS(int v,int N)
{
    flags[v] = 1;
    cout<<v<<" ";
    for(int i=0;i<N;i++)
    {
        if(adj[v][i])
        {
            if(flags[i]!=1)
            DFS(i,N);
        }
    }
}

int main()
{
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
    cin>>adj[i][j];
    
   // DFS(0,N);
    BFS(0,N);
    
    return 0;
}
