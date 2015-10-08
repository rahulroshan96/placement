#include<iostream>
#include<cstring>
#include<vector>

using namespace std;
int main()
{

    string s;
    getline(cin,s);
    int x;
    int i;
    char c;

    int arr[58];
    for(i=0;i<58;i++)
    arr[i] = 0;

    for(i = 0;i<s.length();i++)
    {
        x = s[i] - 65;
        arr[x] = arr[x] + 1;
    }

    for(i=0;i<58;i++)
    {
        //cout<<arr[i]<<' ';
        if(arr[i]>1)
        {
            c = i+65;
            cout<<c<<' ';
        }
    }


    return 0;
}
