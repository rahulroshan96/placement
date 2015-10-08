#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[] = { -2,-3,4,-1,-2,1,5,-3};
	int size = sizeof(a)/sizeof(a[0]);
	int global = 0;
	int sum = 0;
	int i;
	for(i=0;i<size;i++)
	{
		sum = sum + a[i];
		if(sum < 0)
			sum = 0;
		else
			if(sum > global) global = sum;
	}

	printf("%d is sum",global);
}