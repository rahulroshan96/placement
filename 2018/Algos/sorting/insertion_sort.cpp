#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void print_vector(vector<int> myV){
    for(int i=0;i<myV.size();i++){
        cout<<myV[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort(vector<int> &myV){
    int k;
    for(int i=1;i<myV.size();i++){
        k = myV[i];
        for(int j=i-1;j>=0;j--){
            if(k<myV[j]){
                myV[j+1]=myV[j];
            }else{
                myV[j+1]=k;
                break;
            }
        }
    }
}

int main(){
    srandom(time(NULL));
    vector<int> myV;
    for(int i=0;i<10;i++){
        myV.push_back(rand()%100);
    }

    print_vector(myV);
    cout<<"=================="<<endl;
    insertion_sort(myV);
    print_vector(myV);
    return 0;
}