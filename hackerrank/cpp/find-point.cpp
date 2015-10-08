#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,Px,Py,Qx,Qy,Tx,Ty;
    cin>>T;
    while(T!=0)
        {

        cin>>Px>>Py>>Qx>>Qy;
        Tx = Qx;
        Ty = Qy;
        if(Qx-Px != 0) // means change in X;
            {
            if(Qy-Py != 0) // means change in X and Y;
                {
                Tx = (Qx - Px) + Qx;
                Ty = (Qy - Py) + Qy;
            }
            else // means change in X only;
                {
                Tx = (Qx-Px) + Qx; // or do  + 1
            }
        }
        else // no change in X;
            {
            if(Qy-Py != 0) // means change in Y only;
                {
                Ty = (Qy - Py) + Qy;
            }
        }
        T--;
        cout<<Tx<<' '<<Ty;
    }
    return 0;
}

