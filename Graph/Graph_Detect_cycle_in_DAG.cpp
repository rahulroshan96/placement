#include<iostream>
#include<vector>
#include<list>
using namespace std;
int test = 0;
void DFS(vector<list<int> > myG, vector<int> &flags, vector<int> &pred, int u)
{
    cout<<u<<" ";
    flags[u] = 1;
    list<int>::iterator it;
    for(it=myG[u].begin();it!=myG[u].end();it++)
    {
        if(flags[*it]==1 && pred[*it]!=u)
        {
            test = 1;
        }
        else
        {
            pred[*it] = u;
            DFS(myG,flags,pred,*it);
        }
    }
}

int main()
{
    int x,y,N,M;
    cin>>N>>M;
    vector<list<int> > myG(N+1); // this is for we start from 1 not 0 // vertex naming 
    for(int i=0;i<M;i++)
    {
        cin>>x>>y;
        myG[x+1].push_back(y+1);
        
    }
    vector<int> flags(N+1,0);
    vector<int> pred(N+1,0);
    DFS(myG,flags,pred,1);
    if(test==1) cout<<"cycle exists";
    else cout<<"no cycle in the graph";
    return 0;
}
