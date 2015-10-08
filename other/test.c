#include <stdio.h>
#include <stdlib.h>

int compfunc( const void *a, const void *b)
{
	return ( *(int*)a - *(int*)b);
}

int main()
{
	int array[] = {9,8,7,4,5,6,3,2,1};

int size = sizeof(array)/sizeof(array[0]);

	qsort(array, size, sizeof(int), compfunc);

	

	int i=0;
	while(i< (sizeof(array)/sizeof(array[0])))
	{
		printf("%d ",array[i]);
		i++;
	}

	return 0;


}