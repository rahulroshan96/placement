#include <iostream>
#include <cstring>
#include<string>
#include <algorithm>
using namespace std;


int main()
{
    string t("07:45:00PM");


    int a = t.find('P');
/*
    if(a != -1)
    cout<<"hello";
    else cout<<"bye";
    //if()
    */

    if(a != -1)
    {
    /*
        //cout<<"rahul";
        int pos = t.find(':');
        string m(t.substr(0,pos));

        int n = atoi(m.c_str());
        n+=12;
        //string news = to_string()
        t.replace(t.begin(),t.begin()+pos,to_string(n));
        */

        int n = stoi(t);
        n+=12;

        t.replace(t.begin(),t.begin()+(t.find(':')),to_string(n));
        cout<<t;
    }
    else
    cout<<t;



    return 0;
}

