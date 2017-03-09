#include <iostream>
#include <queue>
#include <limits.h>
#include <vector>
using namespace std;

// pair<int,int> first-> node name, second->weight

struct priority{
	bool operator()(pair<int,int> &a, pair<int,int> &b){
		return a.second > b.second;
	}
};

void dijkstra(vector<vector<int> > myv, int n, int S){
	priority_queue<pair<int,int>,vector<pair<int,int> >, priority> myQ;
	
	vector<int> distance(n,INT_MAX);
	distance[S] = 0;

	myQ.push(make_pair(S,0));
	while(!myQ.empty()){
		pair<int,int> temp = myQ.top();
		int u = temp.first;
		for(int i=0;i<n;i++){
			if(myv[u][i]!=0 && (distance[u]+myv[u][i]) < distance[i]){
				distance[i] = distance[u]+myv[u][i];
				myQ.push(make_pair(i,distance[i]));
			}
		}
		myQ.pop();
	}
	for(int i=0;i<n;i++){
		cout<<distance[i]<<" ";
	}
}

int main(){
	freopen("dijkstra.txt","r",stdin);
	int n;
	cin>>n;
	vector<vector<int> > myv(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>myv[i][j];
		}
	}
	dijkstra(myv,n,0);


	return 0;
}