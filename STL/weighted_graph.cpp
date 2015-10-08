#include<iostream>
#include<vector>
#include<list>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
    int N,E,x,y,weight;
    cout<<"enter the number of vertices and edges";
    cin>>N>>E;

    vector<list<pair<int,int>>> myG(N+1);

    cout<<"\nenter the edges";
    for(int i=0;i<E;i++)
    {
        cin>>x>>y>>weight;
        myG[x].push_back(make_pair(y,weight));
    }

    cout<<endl<<endl;


    for(int i=0;i<N;i++)
    {
        cout<<"\nFor vertices "<<i<<" ";
        list<pair<int,int>>::iterator it = myG[i].begin();
        while(it!=myG[i].end())
        {
            cout<<(*it).first<<" "<<(*it).second<<" ";
            ++it;
        }
    }


    return 0;
}
