/* review this code for swapping purpose */

#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
	int *c = NULL;
	*c = *a;
	*a = *b;
	*b = *c;
}

void bubble_sort(int *array,int low, int high)
{

}

void main()
{
	int i;

	int array[] = {9,8,7,4,5,6,3,2,1};
	int size = sizeof(array)/sizeof(array[0]);
	bubble_sort(array,0,size-1);

	int j;
	int flag;
	int low = 0;
	int high = size-1;

	for(i=high;i>low;i--)
		{
			flag = 0;
			for(j=low;j<i;j++)
		{
			if(array[j]>array[j+1])
				{
					swap(&array[j],&array[j+1]);
		/*			int c;
					c = array[j];
					array[j] = array[j+1];
					array[j+1] = c;
					flag = 1;*/
				}
		}
		if(flag == 0) break;
		}




	for(i=0;i<size;i++)
		printf("%d ",array[i]);
}