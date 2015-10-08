#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int x=1;
    for(int i=n;i>=1;i--) // loop for total number of lines/stairs
    {
        for(int j=0;j<i;j++) // loop for the spaces
        cout<<" ";
        for(int k=1;k<=x && k<=n;k++) //loop for the print of #
        cout<<"#";
        x++;
        cout<<endl;
    }

    return 0;
}

