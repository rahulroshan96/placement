
#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y){
    return (x>y)?x:y;
}


template <class T>
T myMin(T x, T y){
    return (x>y)?y:x;
}

int main(){
    cout<<myMax(100,200)<<endl;
    cout<<myMin(100,200)<<endl;
    return 0;
}
