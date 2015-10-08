#include <stdio.h>
#include <stdlib.h>
void main()
{
	int N;
	float pos=0;float neg=0;float zero=0;
	int i;
	scanf("%d",&N);
	int array[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]>0) pos++;
		else if(array[i]<0) neg++;
		else zero++;
	}	
	printf("%f\n%f\n%f",(pos/N),neg/N,zero/N);
}