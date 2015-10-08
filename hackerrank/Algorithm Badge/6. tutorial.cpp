#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int value,n;
    int x,i;
    cin>>value>>n;
    vector<int> myv;
    for(i=0;i<n;i++)
        {
        cin>>x;
        myv.push_back(x);
    }
    for(i=0;i<n;i++)
        {

        if(myv[i] == value)
            {
            cout<<i;
            break;
        }
    }

    return 0;
}
