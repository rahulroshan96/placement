#include <iostream>
#include <stack>
#include <vector>
using namespace std;

 void topological(vector<vector<int> > a, int S, int n, vector<int> &visited, stack<int> &myS){
 	for(int i=0;i<n;i++){
 		if(a[S][i] && !visited[i]){
 			visited[i] = 1;
 			topological(a,i,n,visited,myS);
 		}
 	}

 	myS.push(S);
 }

int main(){
	freopen("topo.txt", "r", stdin);
	int n;
	cin>>n;
	vector<vector<int> > a(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	stack<int> myS;
	vector<int> visited(n,0);
	for(int i=0;i<n;i++){
		if(!visited[i]){
			visited[i]=1;
			topological(a,i,n,visited,myS);
		}
	}
	while(!myS.empty()){
		cout<<myS.top()<<" ";
		myS.pop();
	}
	return 0;
}