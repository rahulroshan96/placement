#include <iostream>
#include <string.h>
using namespace std;
#define ROW 4
#define COL 4

bool isSafe(int a[][COL], bool M[][COL], int i, int j)
{
	return ( (i>=0 && i<ROW) && (j>=0 && j<COL) && a[i][j] && !M[i][j]);
}


void DFS(int a[][COL], bool M[][COL],int i, int j)
{
	int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1};

    M[i][j] = true;
    for(int k=0;k<8;k++)
    {
    	if(isSafe(a,M,i+rowNbr[k],j+colNbr[k]))
    		DFS(a, M, i+rowNbr[k], j+colNbr[k]);
    }
}

int findIslands(int a[][COL])
{
	int count = 0;
	bool M[ROW][COL];
	memset(M, false, sizeof(M));

	for(int i=0;i<ROW;i++)
		for(int j=0;j<COL;j++)
		{
			if(a[i][j] && !M[i][j])
			{
				DFS(a,M,i,j);
				count++;
			}
		}
		return count;
}

int main()
{
	int a[ROW][COL];
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		{
			cin>>a[i][j];
		}
	}

	cout<<findIslands(a);
	return 0;
}
