#include <stdio.h>
#include <stdlib.h>
void main()
{
	int x = 12;
	int i;
	int flag =0;
	int a = 0;
	int b = 4;
	int array[4][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7,4,5,6,7,8};
	for(i=0;i<5;i++)
	{
			if(x == array[a][b])
				{
					printf("%d %d",a,b);
					flag  = 1;
					return ;
				}
			else if(x > array[a][b])
			{
				a = a+1;
			}
			else
				b--;
		}
			if(flag == 0) printf("Element not found\n");
	}

