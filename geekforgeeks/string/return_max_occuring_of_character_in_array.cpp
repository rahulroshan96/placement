#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    locale loc;
    char c;
    int x;
    int i;
    int max = 0;
    getline(cin,s);
    //cin>>s;
    //cout<<endl;

    int arr[58];

    for(i =0;i<58;i++)
    arr[i] = 0;

    for(i=0;i<s.length();i++)
    {

        x = s[i] - 65;
        arr[x] = arr[x] + 1;
        //ŝcout<<"this is arr[i]"<<arr[x]<<' '<<i<<endl;
    }

    for(i=0;i<58;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            c = i+65;
        }
        //cout<<i<<' '<<arr[i]<<endl;


    }
    cout<<c;

    return 0;
}
