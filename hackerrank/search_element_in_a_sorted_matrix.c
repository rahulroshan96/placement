#include <stdio.h>
#include <stdlib.h>
void main()
{
	int x = 4;
	int i;
	int flag =0;
	int a = 0;
	int b = 5;
	int array[4][5] = {1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};
	for(i=0;i<5;i++)
	5
		if(x == array[a,b])
			{
				printf("%d %d",a,b);
				flag  =1;
				return ;
			}
		else if(x > array[a,b])
		{
			a = a+1;
		}
		else
			b--;
	}
	if(flag == 0) printf("Element not found\n");
}