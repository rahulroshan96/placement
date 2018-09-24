#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> S;
    S.push(100);
    S.push(200);
    S.push(300);
    S.push(400);
    S.push(500);
    S.push(600);
    while(!S.empty()){
        cout<<S.top()<<endl;
        cout<<"Stack Size is "<<S.size()<<endl;
        S.pop();
    }
    
    return 0;
}