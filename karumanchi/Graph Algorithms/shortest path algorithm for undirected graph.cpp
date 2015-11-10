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

void Dijkstra(vector<list<int> > myG, int s, vector<int> &flags, vector<int> &visited)
{
    //priority_queue<int, vector<int>, greater<int> > mypq;
    queue<int> myq;
    myq.push(s);
    while(!myq.empty())
    {
        int temp = myq.front();
        list<int>::iterator it;
        for(it=myG[temp].begin();it!=myG[temp].end();++it)
        {
            if(flags[*it] == -1) // means visiting first time;
            {
                flags[*it] = 1 + flags[temp];
                visited[*it] = temp;
                myq.push(*it);
            }
        }
        myq.pop();
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y,N,M;
        cin>>N>>M;
        vector<list<int> > myG(N);
        for(int i=0;i<M;i++)
        {
            cin>>x>>y;
            myG[x].push_back(y);
            myG[y].push_back(x);
        }
        vector<int> flags(N,-1);
        vector<int> visited(N,-1);
        //BFS(myG, 0,flags, visited);
        Dijkstra(myG, 0,flags, visited);

        /*
        for(int i=0;i<N;i++)
        {
            list<int>::iterator it=myG[i].begin();
            cout<<i<<" is adjacent to vertexes ";
            for(;it!=myG[i].end();++it)
            cout<<*it<<" ";
            cout<<endl;
        }*/
        vector<int>::iterator it = visited.begin();
        for(;it!=visited.end();++it)
        cout<<*it<<" ";
    }
    return 0;
}
