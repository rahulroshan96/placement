#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void bubble_sor(vector<int> &V){
    int size = V.size();
    for(int i=size-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(V[j]>V[j+1]){
                int temp = V[j];
                V[j] = V[j+1];
                V[j+1] = temp;
            }
        }
    }
}

void print_vector(vector<int> myV){
    for(auto i=myV.begin();i!=myV.end();++i){
        cout<<*i<<" ";
    }
    cout<<endl;
}


int main(){
    srand (time(NULL));
    vector<int> myV;
    for(int i=0;i<10;i++){
        myV.push_back(rand()%100);
    }
    print_vector(myV);
    bubble_sor(myV);
    cout<<"=============================="<<endl;
    print_vector(myV);   
    return 0;
}