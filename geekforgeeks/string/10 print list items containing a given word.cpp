#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main()
{

    string s;
    vector<string> v;
    for(int i=0;i<4;i++)
    {
        cin>>s;
        v.push_back(s);
    }



    for(int i=0;i<4;i++)
    {
        if(v[i].find("sun") != -1)
        cout<<v[i];
    }


}
