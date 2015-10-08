#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int x;
    int arr[256] = {0};

    for(int i=0;i<s.length();i++)
    {
        x = s[i];
        arr[x]++;
    }

    for(int i=0;i<s.length();i++)
    {
        x = s[i];
        if(arr[x]==1)
        {
        cout<<s[i];
        break;
        }
    }
}

