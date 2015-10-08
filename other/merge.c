#include <stdio.h>
#include <stdlib.h>

#define MAX 50

void divide(int [], int, int);
void conquer(int [], int, int, int);

void divide(int array[], int low, int high)
{
	if(low<high)
	{
		int mid = (low+high)/2;

		divide(array, low, mid);
		divide(array, (mid+1), high);

		conquer(array, low, mid, high);
	}
}

void conquer(int array[], int low, int mid, int high)
{
	int i,j,k;

	i = low;
	j = mid+1;
	k = low;

	int size = (high-low)+1;
	int temp[MAX];

	while(i<= mid && j<= high)
	{
		if(array[i]<=array[j])
		{
			temp[k] = array[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = array[j];
			j++;
			k++;
		}
	}

	if(i>mid)
	{
		while(j<=high)
		{
			temp[k] = array[j];
			j++;
			k++;
		}
	}
	if(j>high)
	{
		while(i<=mid)
		{
			temp[k] = array[i];
			i++;
			k++;
		}
	}

	for(i=0;i<=high;i++)
	{
		array[i] = temp[i];
	}

}


int main()
{
	int array[] = {9,8,7,4,5,6,3,2,1};

	divide(array,0,8);

	int i =0;
	while(i< 9)
	{
		printf("%d ",array[i] );
		i++;
	}

	return 0;
}