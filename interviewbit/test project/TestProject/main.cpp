#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[26]={0};
    string s("We promptly judged antique ivory buckles for the next prize");
    int x;
    int flag = 0;
    char c;

    for(int i=0;i<s.size();i++)
        {
        c = toupper(s[i]);
        x = c-65;
        arr[x]++;
//        cout<<x<<' ';
    }

    for(int i=0;i<26;i++)
        {
        if(arr[i] == 0) flag = 1;
    }
    if(flag == 1) cout<<"not pangram";
    else cout<<"pangram";

    return 0;
}
