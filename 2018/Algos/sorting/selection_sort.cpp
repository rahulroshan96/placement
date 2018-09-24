#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void selection_sort(vector<int> &myV){
    int min_index=0;
    int min_element=myV[min_index];
    int size=myV.size();
    for(int i=0;i<size;i++){
        min_index=i;
        min_element=myV[min_index];
        for(int j=i;j<size;j++){
            if(myV[j]<min_element){
                min_index=j;
                min_element=myV[j];
            }
            int temp = myV[i];
            myV[i]=myV[min_index];
            myV[min_index]=temp;
        }
    }
}

void print_vector(vector<int> myV){
    for(int i=0;i<myV.size();i++){
        cout<<myV[i]<<" ";
    }
    cout<<endl;
}

int main(){
    srandom(time(NULL));
    vector<int> myV;
    for(int i=0;i<10;i++){
        myV.push_back(rand()%100);
    }
    print_vector(myV);
    cout<<"========================"<<endl;
    selection_sort(myV);
    print_vector(myV);
    return 0;
}