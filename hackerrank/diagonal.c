#include <stdio.h>
#include <stdlib.h>
void main()
{
	int N;
	int i,j;
	int dig1 =0;int dig2=0;
	scanf("%d",&N);
	int array[N][N];
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&array[i][j]);

	for(i=0;i<N;i++)
		dig1 = dig1 + array[i][i];
	K =N-1;
	for(i=0;i<N;i++)
		{
			dig2 = dig2 + array[i][K];
			K--;
		}

		dig1 = dig1-dig2;
		printf("%d",abs(dig1));



}