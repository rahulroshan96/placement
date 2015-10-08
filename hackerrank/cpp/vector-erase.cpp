#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,i,x,pos,a,b;
    vector<int> myv;
    cin>>N;
    i=N;
    while(i!=0)
        {
        cin>>x;
        myv.push_back(x);
        i--;
    }
    cin>>pos>>a>>b;
    myv.erase(myv.begin()+pos);
    myv.erase(myv.begin()+a,myv.begin()+b);
    cout<<myv.size();

    vector<int> :: iterator it;
    for(it=myv.begin();it <myv.end();it++)
        cout<<*it;


    return 0;
}

