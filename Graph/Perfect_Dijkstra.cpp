/* Specially for Hacker Rank Domain */

#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<limits.h>
//w325 room number
using namespace std;
struct priority
{
    int operator()(pair<int,int> &p1, pair<int,int> &p2)
    {
        return p1.second > p2.second;
    }
};
void Dijkstra(vector<list<pair<int,int> > > &myG, int s,vector<int> &sum,vector<int> &visited)
{
    priority_queue<pair<int,int>, vector<pair<int,int> >, priority> myQ;
    myQ.push(make_pair(s,0));
    while(!myQ.empty())
    {
        pair<int,int> x = myQ.top();
        myQ.pop();
        int u = x.first;

        list<pair<int,int> >::iterator it;
        for(it=myG[u].begin();it!=myG[u].end();it++)
        {
            int v = (*it).first;
            int r = (*it).second;
            if(sum[v] > (sum[u] + r))
            {
                sum[v] = sum[u] + r;
                myQ.push(*it);
                visited[v] = u;
            }
        }
    }
}

int main()
{
    int T,N,M,x,y,r,S;
    cin>>T;
    while(T--)
    {

    cin>>N>>M;
    vector<list<pair<int,int> > > myG(N);
    for(int i=0;i<M;i++)
    {
        cin>>x>>y>>r;
        myG[x-1].push_back(make_pair(y-1,r));
        myG[y-1].push_back(make_pair(x-1,r));
    }
    cin>>S;
    vector<int> sum(N,INT_MAX);
    vector<int> visited(N,0);
    sum[S-1] = 0; // take care of this place
    Dijkstra(myG,S-1,sum,visited);
    for(int i=0;i<N;i++)
    {
        if(i==S-1)
            continue;
        else
            {
                if(sum[i] == INT_MAX)
                    cout<<"-1"<<" ";
                else
                    cout<<sum[i]<<" ";
            }
    }
    cout<<endl;
    }
    return 0;
}
