#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int findMinimumCostPath(vector<vector<int> > Cost, int i, int j, int n){
		if( i == n-1 && j == n-1 )
		return Cost[n-1][n-1];
 
	if( i == n-1 )
		return findMinimumCostPath(Cost,i, j+1, n) + Cost[i][j];
    if( j == n-1) 
    	return findMinimumCostPath(Cost,i+1, j, n) + Cost[i][j];
 
    return min(findMinimumCostPath(Cost,i+1, j, n), 
    		   findMinimumCostPath(Cost,i, j+1, n)) + Cost[i][j];
}


int main(){
	freopen("minCost.txt","r",stdin);
	vector<vector<int> > myv(3, vector<int>(3));

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>myv[i][j];
		}
	}
	cout<<findMinimumCostPath(myv,0, 0,3);
	return 0;
}