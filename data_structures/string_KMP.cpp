#include <iostream>
#include <vector>
using namespace std;

void fillTemp(vector<int> &temp, string s2, int n){
	int i=0,j=1;
	for(;j<n;j++){
		if(s2[i] == s2[j]){
			temp[j] = i+1; 
			i++;
		}else{
			if(i!=0){
				i = temp[i-1];
			}else{
				temp[j] = 0;
				i++;
			}
		}
	}
}

bool isAvailable(string s1, string s2, vector<int> &temp){
	int a = s1.length(), b = s2.length();
	int j=0;
	for(int i=0;i<s1.length();i++){
		if(s1[i]==s2[j]){
			j++;
			if(j==b){
				return true;
			}
		}else{
			if(j!=0){
				j = temp[j-1];
				i--; // keep the char at the same position
			}
		}
	}
	return false;
}

int main(){
	string s1("abcxabcabcaby"),s2("abcaby");
	vector<int> temp(s2.length(),0);

	fillTemp(temp, s2, s2.length());
	
	if(isAvailable(s1,s2,temp)){
		cout<<"The string has matched";
	}else{
		cout<<"String didn't matched";
	}
	return 0;
}
