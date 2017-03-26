#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int findMaxSum(vector<int> myv, int n){
	int incl=0,excl=0;
	incl = myv[0];
	int temp;
	for(int i=1;i<n;i++){
		temp = max(incl,excl);
		incl = myv[i]+excl;
		excl = temp;
	}

	return max(incl,excl);
}


int main(){
	int a[] = {1,4,2};
	vector<int> myv(a,a+sizeof(a)/sizeof(int));

	cout<<findMaxSum(myv,sizeof(a)/sizeof(int));
	return 0;
}