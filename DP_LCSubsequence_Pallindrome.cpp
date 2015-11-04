/* Logic is very simple, reverse the string, and then find the longest common subsequence between
both the strings 
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int table[1024][1024]={0};
void lcs(string &s1,string &s2)
{
    int m = s1.length();
    int n = s2.length();

    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            table[i][j] = table[i+1][j+1];
            if(s1[i]==s2[j])
            {
                table[i][j]++;

            }
            //room no. 306 tuhindaas took the reading room key
            if(table[i][j]<table[i][j+1])
                table[i][j] = table[i][j+1];
            if(table[i][j]<table[i+1][j])
                table[i][j] = table[i+1][j];

        }
    }
    cout<<table[0][0];
}
int main()
{
    string s1("raxxyxxz");
    string s2(s1);
    
    int i=0,j=s1.length()-1;
    while(i<j)
    {
        swap(s2[i],s2[j]);
        i++;j--;
    }


    lcs(s1,s2);
    //cout<<s2;
}
