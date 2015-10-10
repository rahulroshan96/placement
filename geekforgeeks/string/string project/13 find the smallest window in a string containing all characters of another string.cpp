#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s1("abcdefghij");
    string s2("cfi");

    vector<int> htble(256,0);
    for(int i=0;i<s2.length();++i)
    {
        htble[s2[i]]=1;
    }
    int i=0,index1=0,index2=0;
    bool flag = true;
    for(i=0;i<s1.length();++i)
    {
        if(htble[s1[i]]>0 && flag == true)
        {
            index1 = i;
            flag = false;
            //break;
        }
        if(htble[s1[i]]>0 && flag == false)
        {
            index2 = i;
        }
    }
    cout<<index2-index1+1;

    return 0;
}
