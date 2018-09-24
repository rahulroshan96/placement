#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> Q;
    Q.push(100);
    Q.push(200);
    Q.push(300);
    Q.push(400);
    while(!Q.empty()){
        cout<<Q.front()<<endl;
        Q.pop();
    }
    return 0;
}