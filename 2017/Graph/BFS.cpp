#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(vector<vector<int> > a, int S, int n){
	queue<int> myQ;
	vector<int> visited(n,0);
	visited[S] = 1;
	myQ.push(S);
	while(!myQ.empty()){
		int temp = myQ.front();
		cout<<temp<<" ";
		for(int i=0;i<n;i++){
			if(a[temp][i] && !visited[i]){
				visited[i] = 1;
				myQ.push(i);
			}
		}
		myQ.pop();
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
	bfs(a,2,n);
	return 0;
}