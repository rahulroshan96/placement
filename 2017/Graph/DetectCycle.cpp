#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool detectCycle(vector<vector<int> > a, int n, int S, vector<int> &visited, vector<int> &stored){
	if(!visited[S]){
		visited[S] = 1;
		stored[S] = 1;
		for(int i=0;i<n;i++){
			if(a[S][i]){
				if(stored[i] && visited[i]) return true;
				if(!visited[i]){
					return detectCycle(a,n,i,visited,stored);
				}
			}
		} 
	}
	stored[S] = 0;
	return false;
}


int main(){
	freopen("graph.txt", "r", stdin);
	int n;
	cin>>n;
	vector<vector<int> > a(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	vector<int> visited(n,0);
	vector<int> stored(n,0);
	if(detectCycle(a,n,0,visited, stored)){
		cout<<"Cycle is present in the Graph";
	}else{
		cout<<"Cycle is not present in the Graph";
	}
	return 0;
}