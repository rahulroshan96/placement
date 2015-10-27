#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<limits.h>

using namespace std;
struct priority
{
    int operator()(const pair<int,int> &p1, const pair<int,int> &p2)
    {
        return p1.second > p2.second;
    }
};

void dijkstra(vector<list<pair<int,int> > > myG, int s, vector<int> &flags, vector<int> &visited)
{
    priority_queue<pair<int,int>,vector<pair<int, int> >,priority> myQ;
    myQ.push(make_pair(s,0));
    while(!myQ.empty())
    {
        pair<int,int> temp = myQ.top();
        int u = temp.first;
        list<pair<int,int> >::iterator it;
        for(it=myG[u].begin();it!=myG[u].end();++it)
        {
            int v = (*it).first;
            int w = (*it).second;

            if(flags[v] > (flags[u]+w))
            {
                flags[v] = flags[u]+w;
                myQ.push(make_pair(v,w));
                visited[v] = u;
            }
        }
        myQ.pop();
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y,w,N,M,S;
        cin>>N>>M;
        vector<list<pair<int,int> > > myG(N+1);
        for(int i=0;i<M;i++)
        {
            cin>>x>>y>>w;
            myG[x-1].push_back(make_pair(y-1,w));
            myG[y-1].push_back(make_pair(x-1,w));
        }
        cin>>S;
        vector<int> flags(N+1,999);
        vector<int> visited(N+1,0);
        flags[S-1] = 0;
        dijkstra(myG, S-1, flags, visited);
        for(int i=0;i<N;i++)
        {
            if(i != (S-1))
                {
                if(flags[i]==999) cout<<"-1 ";
                else
            cout<<flags[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
