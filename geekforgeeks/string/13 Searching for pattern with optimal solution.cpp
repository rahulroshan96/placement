// Example program
#include <iostream>
#include <string>

using namespace std;


void find_plen(int *plen,int s2_len,string &s2)
{
    int i=1;
    plen[0] = 0;
    int len = 0;
    char c = s2[0];
    while(i<s2.length())
    {
        if(c == s2[i])
        {
            len++;
            plen[i] = len;
            
        }
        else
        {
            len = 0;
            plen[i] = len;
            c = s2[i];
        }
        i++;
    }
}


int main()
{
    string s1("AAABAAAAAB");
    string s2("AAAB");
    
    int plen[s2.length()];
    find_plen(plen,s2.length(),s2);
    int i=0;
    int j =0;
    while(i<s1.length())
    {
        if(s1[i] == s2[j])
        {
            i++;
            j++;
        }
        if(j == s2.length())
        {
            cout<<"Pattern has been found at index "<<i-j<<endl;
            j = plen[j-1];
        }
        else
        {
            if(i<s1.length() && s1[i]!=s2[j])
            {
                if(j!=0)
                {
                    j = plen[j-1];
                }
                else
                {
                    i = i+1;
                }
            }
        }
    }
 
    
    return 0;
}
