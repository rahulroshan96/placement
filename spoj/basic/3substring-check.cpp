#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    string A,B;
    cin>>A>>B;
    int x = A.find(B);

    if(x != -1) cout<<0<<endl;
    else cout<<1<<endl;
    return 0;
}
