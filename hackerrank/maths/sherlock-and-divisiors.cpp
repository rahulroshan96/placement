#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int N,count,n,i;
    cin>>N;
    while(N!=0)
        {
        count = 0;
        cin>>n;
        vector<int> myv;
        for(i=1;i<=n/2;i++)
            {
            if(n%i == 0) myv.push_back(i);
        }
        vector<int> :: iterator it;

        for(it=myv.begin();it<myv.end();it++)
            {
            if(*it%2 == 0) count++;
        }
        if(count>0) count++;
        cout<<count<<endl;
        N--;
    }


    return 0;
}

