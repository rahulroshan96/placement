#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<stack>

using namespace std;

    vector<bool> flags(10,false);

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


    dfs(0);

    cout<<endl;
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
