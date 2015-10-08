#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T;
    string s;
    int flag = 0,x,y,low,high;
    cin>>T;
    while(T!=0)
        {
        //getline(cin,s);
        cin>>s;
        low=1;high=s.length()-2;
        while(low<=high)
            {
            x = abs(s[low]-s[low-1]);
            y = abs(s[high]-s[high+1]);

            if(x!=y)
                flag = 1;
            low++;
            high--;
        }
        if(flag == 1) cout<<"Not Funny\n";
        else cout<<"Funny\n";
        flag = 0;
        T--;
        s.erase();
    }
    return 0;
}

