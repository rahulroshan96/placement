#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<queue>
#include<stack>

using namespace std;

    vector<bool> flags(10,false);
    vector<bool> bflags(10,false);
    queue<int> myQ;
    vector<list<int>> myG(10);


void dfs(int v)
{
    if(flags[v]!=true)
    {

        flags[v] = true;
        cout<<v<<" ";

        list<int>::iterator it=myG[v].begin();
        for(;it!=myG[v].end();++it)
        {
            if(flags[*it] != true)
            dfs(*it);
        }


    }
}

void bfs(int v)
{
    while(!myQ.empty())
    {
        if(bflags[myQ.front()]!=true)
        {
            cout<<myQ.front()<<" ";
            bflags[myQ.front()] = true;
            list<int>::iterator it = myG[myQ.front()].begin();
            for(;it!=myG[myQ.front()].end();++it)
            {
                if(bflags[*it]!=true)
                myQ.push(*it);
            }
            myQ.pop();
        }



    }
}


int main()
{
    myG[0].push_back(1);
    myG[0].push_back(2);
    myG[0].push_back(5);
    myG[1].push_back(0);
    myG[1].push_back(6);
    myG[1].push_back(4);
    myG[2].push_back(0);
    myG[2].push_back(3);
    myG[5].push_back(0);
    myG[5].push_back(7);
    myG[7].push_back(5);
    myG[7].push_back(8);
    myG[7].push_back(9);
    myG[6].push_back(1);
    myG[4].push_back(1);
    myG[3].push_back(2);
    myG[8].push_back(7);
    myG[9].push_back(7);

    cout<<"\nThis is DFS traversal ";
    dfs(0);

    cout<<"\nThis is BFS traversal ";

    myQ.push(0);
    bfs(0);
    cout<<endl;


    cout<<"\nThis is simple traversal";
    for(int i=0;i<10;i++)
    {
        cout<<"\nvertices "<<i<<" ";
        list<int>::iterator it = myG[i].begin();
        while(it!=myG[i].end())
        {
            cout<<*it<<" ";
            ++it;
        }

    }

    return 0;
}
