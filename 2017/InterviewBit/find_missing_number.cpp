#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


vector<int> findAB(vector<int> &A){
	int n = A.size();
	vector<int> found;
	int totalsum=0, totalSquareSum=0, realSum=0, realSquareSum=0; // real sum is n(n-1)/2
	for(int i=0;i<n;i++){
		totalsum+=A[i];
		totalSquareSum+=(A[i]*A[i]);

		realSum+=(i+1);
		realSquareSum+=((i+1)*(i+1));
	}

	int X = realSum - totalsum; // X = A - B
	int Y = realSquareSum - totalSquareSum; // Y = A2 - B2

	int Z = Y/X; // Z = A + B

	int A1 = (X+Z)/2;

	int B = Z - A1;

	found.push_back(B);
	found.push_back(A1);

	return found;
}

int main(){
	int a[] = {3, 1, 2, 5, 3};
	int n = sizeof(a)/sizeof(int);
	vector<int> myv(a,a+n);
	vector<int> found(findAB(myv));
	cout<<found[0]<<" "<<found[1];
	return 0;
}