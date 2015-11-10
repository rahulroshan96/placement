#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
/*
void BFS(vector<list<int> > myG, int s, vector<bool> &flags, vector<int> &visited)
{
    queue<int> myQ;
    myQ.push(s);
    while(!myQ.empty())
    {
        int temp = myQ.front();
        if(!flags[temp])
        flags[temp] = true;
        list<int>::iterator it = myG[temp].begin();
        for(;it!=myG[temp].end();++it)
        {
            if(!flags[*it])
            {
                flags[*it] = true;
                myQ.push(*it);
            }
        }
        myQ.pop();
        cout<<temp<<" ";
    }
}
*/

void Dijkstra(vector<list<pair<int,int> > > myG, int s, vector<int> &flags, vector<int> &visited)
{
    priority_queue<int, vector<int>, greater<int> > myQ;
    myQ.push(s);
    while(!myQ.empty());
    {
        int temp = myQ.top();
        list<pair<int,int> >::iterator it;
        for(it=myG[temp].begin();it!=myG[temp].end();++it)
        {
            if(flags[(*it).first] == -1)
            {
                flags[(*it).first] = (*it).second + flags[temp];
                myQ.push((*it).first);
                visited[(*it).first] = temp;
            }
            else
            {
                if(flags[(*it).first] > (flags[temp] + (*it).second))
                flags[(*it).first] = (*it).second + flags[temp];
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
        int x,y,N,M,z;
        cin>>N>>M;
        vector<list<pair<int,int> > > myG(N);
        for(int i=0;i<M;i++)
        {
            cin>>x>>y>>z;
            myG[x].push_back(make_pair(y,z));
            myG[y].push_back(make_pair(x,z));
        }
        vector<int> flags(N,-1);
        vector<int> visited(N,-1);
        //BFS(myG, 0,flags, visited);
        Dijkstra(myG, 0,flags, visited);

        /*
        for(int i=0;i<N;i++)
        {
            list<pair<int,int> >::iterator it=myG[i].begin();
            cout<<i<<" is adjacent to vertexes and weights are ";
            for(;it!=myG[i].end();++it)
            cout<<(*it).first<<" "<<(*it).second<<"   ";
            cout<<endl;
        }
        */

        vector<int>::iterator it = visited.begin();
        for(;it!=visited.end();++it)
        cout<<*it<<" ";

    }
    return 0;
}
