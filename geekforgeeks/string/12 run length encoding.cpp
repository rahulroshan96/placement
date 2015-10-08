#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s("wwwwaaaadexxxxxx");
    string encoding;
    //cout<<s;
    string::iterator it=s.begin();
    int i =0;
    while(i<s.length())
    {

    encoding.replace(string(s[i]));

    it++;
    i++;
    }
    cout<<encoding;
/*

    char c[1];
    c[0] = s[0];
    int count = 1;
    int j =0;
    string::iterator it=encoding.begin();
    for(int i=1;i<s.length();i++)
    {
        if(s[i] == c[0])
        count++;
        else
        {
            char buff[2];
            encoding.append(c);
            //replace(it,encoding.end(),'y',)
            encoding.replace(it,it+1,string(c[0]));
            it++;
            encoding.replace(it,it+1,to_string(count));
            it++;
            //j++;
            //encoding.append(strcpy(buff,to_string(count).c_str()));
            //j++;
            //i++;
            c[0] = s[i];
            count = 1;
        }
    }
    cout<<encoding;
*/
    return 0;

}
