#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int,int> mymap;
    mymap.insert(make_pair(1,100));
    map<int,int>::iterator it;
    it = mymap.find(1);
    if((*it).second == false){
        cout<<"element is not present"<<endl;
    }
    else{
        cout<<"element is present"<<endl;
    }
    cout<<"This is the element"<<(*it).second;
    mymap.erase(1);
    it = mymap.find(1);
    if((*it).second == false){
        cout<<"element is not present"<<endl;
    }
    else{
        cout<<"element is present"<<endl;
    }
    return 0;
}

