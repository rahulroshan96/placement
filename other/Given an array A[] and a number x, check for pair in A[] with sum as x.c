#include <stdio.h>
#include <stdlib.h>
int funcomp(const void *a,const void *b)
{
	return (*(int *) a - *(int*)b);
}
void main()
{
	int x = 9;

	int j; int k; int flag=0;
	int array[] = {9,8,7,4,5,6,3,2,1};
	int i;
	qsort(array,9,sizeof(int),funcomp);
	i=0;j=8;
	
	while(i>=0 && j<=8 && i<j)
	{
		if(array[i]+array[j] == x) 
		{
			printf("\n%d %d",array[i],array[j]);
			flag = 1;
			break;
	
		}
		else if((array[i]+array[j]) > x)
		{
			j--;
	
		}
		else 
			{
				i++;
	
			}
	}
	if(flag == 0) printf("No such pair is available\n");
	printf("\nindexs are %d %d\n",i,j);

}