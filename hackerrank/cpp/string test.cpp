#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    swap(s1[0],s2[0]);
    cout<<s1<<' '<<s2;
    return 0;
}
