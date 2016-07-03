#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int T[1024][1024]={0};
void lcs(string &P,string &Q)
{
int p = P.length();
int q = Q.length();

for(int i=0; i<=p; i++) { T[i][0] = i; }
for(int i=0; i<=q; i++) { T[0][i] = i; }

for(int i=1; i<=p; i++) {
    for(int j=1; j<=q; j++) {
        if (P[i-1] == Q[j-1])
            T[i][j] = T[i-1][j-1];
        else
            T[i][j] = min(T[i-1][j], T[i][j-1]) + 1;
    }

}

cout << "Case " << ": " << T[p][q]/2 << endl;
}
int main()
{
    string s1("anuja");
    string s2(s1);
    
    int i=0,j=s1.length()-1;
    while(i<j)
    {
        swap(s2[i],s2[j]);
        i++;j--;
    }
    lcs(s1,s2);
    //cout<<s2;
    return 0;
}
