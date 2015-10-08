#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,Q,x;
    vector<int> myv;
    cin>>N;
    while(N!=0)
        {
        cin>>x;
        myv.push_back(x);
        N--;
    }
    sort(myv.begin(),myv.end());
    vector<int> :: iterator low,up;
    cin>>Q;
    while(Q!=0)   //1 1 2 2 6 6 9 15
        {
        cin>>x;
        low = lower_bound(myv.begin(),myv.end(),x);
        up = upper_bound(myv.begin(),myv.end(),x);
        if(low == up)
            {
            cout<<"No "<<(low-myv.begin())+1<<endl;
        }
        else
            {
            cout<<"Yes "<<(low-myv.begin())-1<<endl;
        }
        Q--;
    }


    return 0;
}
