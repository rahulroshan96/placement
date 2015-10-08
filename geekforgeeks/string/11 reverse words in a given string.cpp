/* complete the program*/

#include<iostream>
#include <cstring>
#include <algorithm>


using namespace std;

int main()
{

    string s("I belongs to Computer Science");

    reverse(s.begin(),s.end()-2);

    int i=0,j=0;
    while(j<s.length())
    {
        if(s[i] == ' ' || i == s.length()-1)
        {

            reverse(s.begin()+i, s.begin()+j);
            j++;
            i=j;
        }

        else
        {
        j++;
        }
    }

    cout<<s;

/**
    int i,j,x,y;
    char s[] = {"ab bc cd"};

    i=j=0;



    int sizeofs = strlen(s);

    char reversestring[sizeofs+2];
    reversestring[sizeofs+1] = '\0';


    while(j<=sizeofs)
    {
        if (s[j] == ' ' || (j == sizeofs-1))
        {
            x = sizeofs-j;
            while(i<=j)
            {
                reversestring[x] = s[i];
                x++;i++;
            }
            j++;i=j;
        }
        else
        j++;
    }


    cout<<reversestring;
**/
    return 0;
}

/**
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    string :: iterator it1,it2;
    string s("I belongs to Computer Science");
    string newstring;
    string test;
    it1 = s.begin();
    it2 = s.begin();
    while(it2 < s.end())
    {
        if(*it1 != ' ')
        it1++;
        else
        {
            test.assign(it2,it1+1);
            newstring.insert(0,test);
            it1++;
            it2 = it1;
        }
        if(it2 == s.end()-1) break;
    }
    cout<<newstring;


    return 0;
}

**/


