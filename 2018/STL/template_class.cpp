#include <iostream>
using namespace std;

template <class T>

class student {
    T name;
public:
    student(T n){
        name = n;
    }
    T getName(){
        return name;
    }
    T getStudentName();
};

template <class T>
T student<T>::getStudentName(){
    return name;
}

int main(){
    student<string> myobj("rahul");
    cout<<myobj.getName()<<endl;
    cout<<myobj.getStudentName()<<endl;
    return 0;
}
