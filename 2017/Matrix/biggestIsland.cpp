#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int> > myv, vector<vector<int> > &visited, int i, int j, int n){
	return ((i<n && i>=0 && j>=0 && j<n && myv[i][j] && !visited[i][j]));
}

void findIslands(vector<vector<int> > myv, vector<vector<int> > &visited, int i, int j, int n, int *m){
	visited[i][j] = 1;
	int row[4] = {0,1,0,-1};
	int col[4] = {1,0,-1,0};

	for(int k=0;k<4;k++){
		if(isSafe(myv, visited,i+row[k],j+col[k],n)){
			*m = *m+1;
			findIslands(myv, visited, i+row[k], j+col[k], n, m);
		}
	}
}

int DFS(vector<vector<int> > myv, vector<vector<int> > &visited, int n){
	int count=0;
	int biggest =0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(myv[i][j] && !visited[i][j]){
				int m=0;
				findIslands(myv,visited,i,j,n,&m);
				count++;
				biggest = max(biggest, m); // taking the biggest island 
			}
		}
	}
	return biggest+1;
}


int main(){
	freopen("island.txt","r",stdin);
	vector<vector<int> > myv(4, vector<int>(4));
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>myv[i][j];
		}
	}

	vector<vector<int> > visited(4,vector<int>(4));
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			visited[i][j] = 0;
		}
	}
	cout<<DFS(myv,visited, 4);

	return 0;
}