#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{
    vector<int> myvector(4);
    myvector.push_back(a);
    myvector.push_back(b);
    myvector.push_back(c);
    myvector.push_back(d);
    vector<int>::iterator it=myvector.end()-1;
    sort(myvector.begin(),myvector.end());
    return *it;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}


