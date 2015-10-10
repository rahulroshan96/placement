#include<iostream>
#include<string>
#include<vector>
using namespace std;
void find_pattern(string &s1, string &s2)
{
    int i=0,j=0,m=0,index=0;
    bool flag = false;
    for(i=0;i<s1.length();++i)
    {
        if(s1[i] == s2[m] && flag==false)
        {
            index = i;
            flag = true;
            m++;
        }
        else if(s1[i]==s2[m] && flag==true)
        {
            if(s1[i] == s2[s2.length()-1]) // means this is the last character of s2 string
            {
                cout<<"pattern found at "<<index;

                flag=false;
                m=0;
            }
            else
            {
                m++;
            }
        }
        else
        {
            m = 0;
            flag = false;
        }

    }
}

int main()
{
    string s1("rahul isx the best isx");
    string s2("is");

    find_pattern(s1,s2);

    return 0;
}
