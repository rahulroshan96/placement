#include<iostream>
#include<string>
#include<vector>
using namespace std;
void find_pattern(string &s1, string &s2)
{
    vector<int> table(s1.length(),0);
    for(int x=0;x<s1.length();++x)
    {

    int i=0,j=0,m=0,index=0;
    bool flag = false;
    for(i=x;i<s1.length();++i)
    {
        if(s1[i] == s2[m] && flag==false)
        {
            index = i;
            flag = true;
            m++;
        }
        else if(s1[i]==s2[m] && flag==true)
        {
            //if(s1[i] == s2[s2.length()-1]) // means this is the last character of s2 string
            if((i-index+1) == s2.length()) // means this is the last character of s2 string
            {
                if(table[index] == 0)
                {
                    cout<<"pattern found at "<<index<<endl;
                    table[index] = 1;
                }

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
}
// done
int main()
{
    string s1("aaaaaaaa");
    string s2("aaaa");

    find_pattern(s1,s2);

    return 0;
}
