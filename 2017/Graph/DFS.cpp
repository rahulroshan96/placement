#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void dfs(vector<vector<int> > a, int S, int n, vector<int> &visited){
	visited[S] = 1;
	cout<<S<<" ";
	for(int i=0;i<n;i++){
		if(a[S][i] && !visited[i]){
			dfs(a, i, n, visited);
		}
	}
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
	dfs(a,2,n,visited);
	return 0;
}