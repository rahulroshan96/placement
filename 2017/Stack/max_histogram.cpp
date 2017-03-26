#include <iostream>
#include <stack>
#include <vector>
#include <limits.h>
using namespace std;

int findMax(vector<int> myv, int n){
	int i=0;
	int global=INT_MIN;
	stack<int> S;
	int temp;
	int top;
	while(i<n){
		if(S.empty() || myv[i]>= myv[S.top()]){
			S.push(i);
			i++;
		}else{
				top = S.top();
				S.pop();

				int temp = myv[top]*(S.empty()?i:(i-S.top()-1));
				global = max(temp,global);
		}
	}

	while(!S.empty()){
		top = S.top();
		S.pop();

		temp = myv[top]*(S.empty()?i:(i-S.top()-1));
		global=max(global,temp);
	}
	
	return global;
}
int main(){
	int a[] = {6,2,5,4,5,1,6};
	vector<int> myv(a,a+sizeof(a)/sizeof(int));
	cout<<findMax(myv,sizeof(a)/sizeof(int));
	return 0;
}