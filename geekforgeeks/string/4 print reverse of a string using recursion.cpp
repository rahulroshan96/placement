#include<iostream>
#include<cstring>

using namespace std;

void reverse(string &s, int low, int high)
{
    if(low>=high)
    return ;
    else
    {
        swap(s.at(low),s.at(high));
        reverse(s,low+1,high-1);
    }
}


int main()
{
    string s;
    getline(cin,s);
    //cout<<s.at(2);
    reverse(s,0,s.length()-1);
    cout<<s;

}
