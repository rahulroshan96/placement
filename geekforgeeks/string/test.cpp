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
    while(it2 <= s.end())
    {
        if(*it1 != ' ' || !(it1 == s.end()))
        it1++;
        else
        {
            if(it1 == s.end())
            test.assign(it2,it1-1);
            else
            test.assign(it2,it1+1);
            newstring.insert(0,test);
            it1++;
            it2 = it1;
        }

    }
    cout<<newstring;


    return 0;
}
