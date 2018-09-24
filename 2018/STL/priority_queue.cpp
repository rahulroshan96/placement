#include <iostream>
#include <queue>

using namespace std;

struct priority {
    bool operator()(int &a, int &b){
        return a>b;
    }
};

int main(){
    priority_queue<int,vector<int>, priority> myq;  // priority queue with comparator returns increasing order
    // priority_queue<int, priority> myQ; // priority queue with no comparator returns decreasing order
    myq.push(12);
    myq.push(10);
    myq.push(14);
    while(!myq.empty()){
        cout<<myq.top()<<endl;
        myq.pop();
    }
    return 0;
}