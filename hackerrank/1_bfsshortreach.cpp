#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <queue>
using namespace std;

struct priority
    {
    bool operator()(pair<int,int> &a, pair<int,int> &b)
        {
        return a.second > b.second;
    }
};

void bfsshortreach(vector<vector<int> > &myv, int N, vector<int> &adj, int S)
    {
        vector<bool> flag(N,false);
        flag[S] = true;
        queue<int> myQ;
        myQ.push(S);
        while(!myQ.empty())
        {
            int u = myQ.front();
            for(int v = 0; v<N;v++)
            {
                if(myv[u][v] && !flag[v])
                {
                    adj[v] = adj[u]+6;
                    flag[v] = true;
                    myQ.push(v);
                }
            }
            myQ.pop();
        }


    for(int i=0;i<N;i++)
        {
            if(i != S)
            {

            if(adj[i]==0) cout<<"-1 ";
            else cout<<adj[i]<<" ";
            }
    }

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    while(T--)
        {
        int x,y,M,N,S;
        cin>>N>>M;
        vector<vector<int> > myv(N,vector<int>(N));
        for(int i=0;i<N;i++)
            {
            for(int j=0;j<N;j++)
                myv[i][j] = 0;
        }
        for(int i=0;i<M;i++)
            {
            cin>>x>>y;
            myv[x-1][y-1] = 1, myv[y-1][x-1] = 1;
        }
        cin>>S;
        vector<int> adj(N,0);
        adj[S] = 0;
        bfsshortreach(myv, N, adj, S-1);
        cout<<endl;


    }

    return 0;
}
