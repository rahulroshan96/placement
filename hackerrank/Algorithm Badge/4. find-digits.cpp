#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

//    string s("1012");
//    string x(s,0,1);
//    int i = stoi(x);
//    cout<<i;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,n,count=0;
    string s;

    cin>>T;
    while(T!=0)
        {
        cin>>s;
        n = stoi(s);
        for(int i=0;i<s.length();i++)
            {
            string x(s,i,1);
            int l = stoi(x);
            if(l == 0) continue;
            if(n%l == 0)
                count++;
        }
        T--;
        s.erase();
        cout<<count<<endl;
        count = 0;
    }
    return 0;
}
