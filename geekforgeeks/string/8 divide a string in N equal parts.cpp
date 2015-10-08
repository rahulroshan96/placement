#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string s = "divide";
    int n = 3;
    int x = s.length()/n;

    for(int i=0;i<s.length();i=i+x)
    {
        cout<<s.substr(i,x)<<' ';
    }

    return 0;
}
