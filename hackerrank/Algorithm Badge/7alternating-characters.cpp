#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T;
    string s;
    int count=0;
    cin>>T;
    while(T!=0)
        {
        cin>>s;

            int i =0;
            while(i<s.length()-1)
            {
            if(s[i+1] == s[i]) // s[i+1] and s[i] are same
                {
                s.erase(i+1,1);
                count++;
            }
                else i++;
        }
        cout<<count<<endl;
        count = 0;
        s.erase();
        T--;
    }
    return 0;
}

