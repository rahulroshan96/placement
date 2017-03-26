#include <iostream>
#include <string>
using namespace std;
int main(){

	string str="abca";
	int checker = 0;
	bool flag = false;
    for (int i = 0; i < str.length(); i++) {
        int val = str[i] - 'a';
        if ((checker & (1 << val)) > 0){
        	flag = true;
        	break;
        }
        checker |= (1 << val);
    }
    if(flag){
    	cout<<"duplicate found";
    }else{
    	cout<<"not duplicate";
    }
    
	return 0;
}