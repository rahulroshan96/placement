#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

// void divide(vector<int> &myV, int i, int j){
//     if(j>=i){
//         return;
//     }
//     int mid = (j-1)/2;
//     divide(myV, i, mid);
//     divide(myV, mid+1, j);
    
// }

void combine(vector<int> &myV, int i, int mid, int j){
    int middle_element = mid;
    int last=j;
    int x=i;
    vector<int> temp((j-i)+1);
    while(i<=middle_element && j<=last){
        if(myV[i]>myV[j]){
            temp[x]=myV[i];
            x++;
            j++;
        }else{
            i++;
        }
    }
    if(i<middle_element){

    }
}

void divide(vector<int> &myV, int i, int j){
    if(j>=i){
        return myV;
    }
    int mid = (j-i)/2;
    divide(myV, i, mid);
    divide(myV, mid+1, j);
    combine(myV, i, mid, j);
}

int main(){
    srandom(time(NULL));
    vector<int> myV;
    for(int i=0;i<10;i++){
        myV.push_back(rand()%100);
    }    

    merge_sort(myV,0,myV.size()-1);
    return 0;
}