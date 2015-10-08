#include<iostream>
#include<algorithm>
#include<set>
#include<list>
#include<vector>

using namespace std;

int main()
{
    vector<list<int>> myG(4);
    myG[0].push_back(1);
    myG[0].push_back(3);
    myG[1].push_back(2);
    myG[1].push_back(0);
    myG[2].push_back(3);
    myG[2].push_back(1);
    myG[3].push_back(2);
    myG[3].push_back(0);

    vector<list<int>>::iterator it;



    for(it=myG.begin();it!=myG.end();++it)
    {
        list<int> li = *it;
        for(list<int>::iterator lit = li.begin();lit!=li.end();++lit)
        cout<<*lit<<" ";
    }

    return 0;
}
