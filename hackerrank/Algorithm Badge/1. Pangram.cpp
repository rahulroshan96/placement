#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[26]={0};
    string s;
    int x;
    int flag = 0;
    char c;
    getline(cin,s); // take input of any string as this syntex only
    for(int i=0;i<s.size();i++)
        {
        c = toupper(s[i]);
        x = c-65;
        arr[x]++;

    }

    for(int i=0;i<26;i++)
        {
        if(arr[i] == 0) flag = 1;

    }
    if(flag == 1) cout<<"not pangram";
    else cout<<"pangram";

    return 0;
}
