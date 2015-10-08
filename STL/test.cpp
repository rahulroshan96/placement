#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<queue>
#include<stack>

using namespace std;



int main()
{
    vector<pair<int,int> > myv;
    myv.push_back(make_pair(10,20));
    myv.erase();
    if(myv.empty()) cout<<"hello";




    return 0;
}
