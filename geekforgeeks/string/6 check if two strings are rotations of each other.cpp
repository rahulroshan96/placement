#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1("rahulm");
    string s2("humlra");

    int i,j;
    j=0;
    i=0;
    int count=0;

    if(s1.length() != s2.length())
    {
    cout<<"both strings are not rotation of each other";
    return 0;
    }


    while(i<s1.length() || count <= (2*s2.length())-2)
    {
        if(s1[i] == s2[j])
        {

            if(j== s2.length()-1)
            {
                j = 0;
                count++;
            }
            else
            {
                j++;
                count++;
            }
            i++;

        }
        else
        {
            if(j == s2.length()-1)
            j=0;
            else j++;

            count++;
        }
    }

    if(i!=s1.length()) cout<<count<<' '<<"both strings are not rotation of each other";
    else
    cout<<count<<' '<<"both strings are rotations of each other";


    return 0;
}
