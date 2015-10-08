#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[] = {3,3,4,2,4,4,2,4,4};
	int size = sizeof(a)/sizeof(a[0]);
	int element = a[0];
	int global  = 1;
	int i;
	for(i=1;i<size;i++)
	{
		if(a[i] == element) 
			global++;
		else
		{
			global--;
			if(global == 0)
				{
					element = a[i];
					global++;
				}
		}
	}
	printf("\n%d this is the major element \n",element);
}