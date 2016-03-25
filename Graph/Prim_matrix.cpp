#include <iostream>
#include <vector>
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

void Prim(vector<vector<int> > &myv, int n, int S, vector<int> &distance, vector<int> &parent)
{
    priority_queue<pair<int,int>, vector<pair<int,int> >, priority> myQ;
    myQ.push(make_pair(S,0));
    while(!myQ.empty())
    {
        int u = (myQ.top()).first;
        int w = (myQ.top()).second;
        myQ.pop();
        for(int v=0;v<n;v++)
        {
            if(myv[u][v] && distance[v]>(myv[u][v]+distance[u]))
            {
                myQ.push(make_pair(v, myv[u][v]+distance[u]));
                distance[v] = myv[u][v]; // this is the main different from Dijkstra
                parent[v] = u; // the above line is distance[v] = myv[u][v]+distance[u]
                // in case of Dijkstra
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        cout<<parent[i]<<" to "<<i<<" "<<myv[i][parent[i]]<<endl;
    }

}
int main()
{
    int n;
    cout<<"enter number of vertices"<<endl;
    cin>>n;
    cout<<"enter the value of matrix"<<endl;
    vector<vector<int> > myv(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>myv[i][j];
        }
    }
    vector<int> distance(n,INT_MAX);
    distance[0] = 0;
    vector<int> parent(n,0);
    Prim(myv, n, 0, distance,parent);
    return 0;
}
