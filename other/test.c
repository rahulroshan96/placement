#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y,N,M;
        cin>>N>>M;
        vector<list<int> > myG(N+1);
        for(int i=0;i<M;i++)
        {
            cin>>x>>y;
            myG[x].push_back(y);
            myG[y].push_back(x);
        }

        for(int i=0;i<N;i++)
        {
            vector< list<int> >::iterator it=myG[i].begin();
            cout<<i<<" is adjacent to vertexes ";
            for(;it!=myG[i].end();++it)
            cout<<*it<<" ";
            cout<<endl;
        }
    }
    return 0;
}
