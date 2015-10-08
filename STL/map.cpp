#include<iostream>
#include<array>
#include<map>
using namespace std;

int main()
{

    map<int,int> mymap;

    pair<map<int,int>::iterator,bool> x;


    x = mymap.insert(make_pair(0,10));
    if(x.second == false) cout<<"The element is already present\n";
    x=mymap.insert(make_pair(1,20));
    if(x.second == false) cout<<"The element is already present\n";
    x=mymap.insert(make_pair(2,30));
    if(x.second == false) cout<<"The element is already present\n";

    x=mymap.insert(make_pair(2,40));
    if(x.second == false) cout<<"The element is already present\n";


    map<int,int>::iterator it;

    for(it=mymap.begin();it!=mymap.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}

