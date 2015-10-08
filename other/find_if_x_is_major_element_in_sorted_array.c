// find the x that comes more than n/2 times in a sorted array.

#include <stdio.h>
#include <stdlib.h>

/* This function will give us the first occurence of the element*/
int binary(int array[], int low, int high, int x)
{
	int mid = (low+high)/2;

	if((mid == 0 || x > array[mid-1] ) && (array[mid] == x))
		return mid;
	else 
	{
		if(array[mid]< x)
		return binary(array,(mid+1),high,x);
	else 
		return binary(array,low,(mid-1),x);
	}
}

int is_major(int array[], int low, int high, int x,int n)
{
	int i = binary(array,low,high,x);

	if((i+(n/2 - 1) <= n-1)  && (array[i+(n/2 - 1)] == x)) return 1;
	else 
		return -1;

}

int main()
{

	int array[10] = {1,1,1,2,2,2,2,2,2,3};
	int result = is_major(array,0,9,3,10);

	if(result == 1) printf("%s\n","2 is a major element" );
	else printf("%s\n","2 is not a major element" );
	return 0;
}
