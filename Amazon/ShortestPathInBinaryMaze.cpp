// from cell 0,0 find the shortest path towards the destination cell

#include <iostream>
#include <string.h>
#include <limits.h>
using namespace std;
#define ROW 4
#define COL 4

bool isSafe(int a[][COL], bool visited[][COL], int i, int j)
{
	return ( (i>=0 && i<ROW) && (j>=0 && j<COL)  && a[i][j] && !visited[i][j]);
}

void DFS(int a[][COL], int M[][COL], bool visited[][COL],int i, int j, int k)
{
	// k is the distance of cell a[i][j] from a[0][0]
	visited[i][j] = true;
	if(M[i][j] > k+1) M[i][j] = k+1;

	int roww[] = {-1,0,1,0};
	int coll[] = {0,1,0,-1};
	for(int l=0;l<4;l++)
	{
		if(isSafe(a,visited,i+roww[l],j+coll[l]))
		{
			DFS(a,M,visited,i+roww[l],j+coll[l],M[i][j]);
		}
	}
}


int findDistance(int a[][COL],int x, int y)
{
	// x and y are the co-ordinates of the destination cell
	int M[ROW][COL]; // will store the distance from source cell 0,0
	bool visited[ROW][COL]; // will tell if the cell is visited or not
	memset(visited, false, sizeof(visited)); 
	int max = INT_MAX;
	//memset(M, INT_MAX, sizeof(M));
	//memset do not fill an arry with other values except 0 therefore
	//we are using loops
	for(int i=0;i<ROW;i++)
		for(int j=0;j<COL;j++)
			M[i][j] = INT_MAX;
	// travel all the cells from source cell 0,0
	M[0][0] = 0;
	DFS(a,M,visited,0,0,0);

for(int i=0;i<ROW;i++)
		{
			for(int j=0;j<COL;j++)
			cout<<M[i][j]<<" ";
		cout<<endl;
		}

			return M[x][y];
}

int main()
{
	int a[ROW][COL];
	for(int i=0;i<ROW;i++)
		for(int j=0;j<COL;j++)
			cin>>a[i][j];

		int x,y;
		// x and y are the destination cell
		cin>>x>>y;
	cout<<findDistance(a,x,y);
	return 0;
}
