#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[] = {1,2,3,2,3,4,4};
	int sum = 0; int i;
	for(i=0;i<(sizeof(a)/sizeof(a[0]));i++)
	{
		sum = sum ^ a[i];
	}
	printf("%d\n",sum);
}