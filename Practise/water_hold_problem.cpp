#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main(){
	int n = 6;
	int a[] = {6,2,3,4,5,6};
	vector<int> myv(a,a+n);
	vector<int> left(n);
	vector<int> right(n);
	int l=myv[0],r=myv[n-1];

	left[0] = 0;
	for(int i=1;i<n;i++){
		l = max(myv[i-1],l);
		left[i] = l;
	}

	right[n-1] = 0;
	for(int i=n-2;i>=0;i--){
		r = max(myv[i+1],r);
		right[i] = r;
	}

	int collected=0;

	for(int i=0;i<n;i++){
		int x = min(left[i],right[i])-myv[i];
		if(x<0){
			collected+=0;
		}else{
			collected+=x;
		}
	}
	cout<<collected;

	return 0;
}