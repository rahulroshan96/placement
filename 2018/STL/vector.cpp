#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<vector<int> > M){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    vector<int> a(5,0);
    for(int i=0;i<5;i++){
        a[i]=i+100; // we can use a.push_back(i+100) too but in that case i would come after all 0's
    }

    vector<int>:: iterator i;
    for(i=a.begin();i!=a.end();i++){
        cout<<*i<<endl;
    }

    int x=0;
    vector<vector<int> > M(4, vector<int>(4));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            M[i][j] = x;
            x++;
        }
    }
    print_vector(M);
    // cout<<"capacity: "<<a.capacity()<<endl;
    return 0;
}