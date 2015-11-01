#include<iostream>
using namespace std;

string s1("ABCBDAB");
string s2("BDCABA");
    

int LCS[1024][1024];

int LCSX(int m, int n)
{
   
    for(int i=0;i<=m;i++)
    LCS[i][n] = 0;
    
    for(int i=0;i<=n;i++)
    LCS[m][i] = 0;
    
    for(int i=m-1;i>=0;i--)
     for(int j=n-1;j>=0;j--)
    {
        LCS[i][j] = LCS[i+1][j+1];
        
        if(s1[i] == s2[j])
            {
                LCS[i][j]++;
            }
            
        
        
        if(LCS[i+1][j] > LCS[i][j])
        //LCS[i][j] = LCS[i][j+1]; // very good beta spoiled 1 and half hour 
        LCS[i][j] = LCS[i+1][j];
        
        if(LCS[i][j+1]> LCS[i][j])
        LCS[i][j] = LCS[i][j+1];
    }
   /* 
    for(int i=m-1;i>=0;i--)
    for(int j=n-1;j>=0;j--)
    {
        LCS[i][j] = LCS[i+1][j+1];
        if(s1[i] == s2[j]) LCS[i][j]++;
        
       // LCS[i][j] = max(LCS[i][j+1],(max(LCS[i][j],LCS[i+1][j])));
        
        
        if(LCS[i+1][j] > LCS[i][j]) 
        LCS[i][j] = LCS[i+1][j];
        if(LCS[i][j+1] > LCS[i][j]) 
        LCS[i][j] = LCS[i][j+1];
    }
    */
    return LCS[0][0];
}

int main()
{
    
    cout<<LCSX(s1.length(),s2.length());
   
    
    return 0;    
}
