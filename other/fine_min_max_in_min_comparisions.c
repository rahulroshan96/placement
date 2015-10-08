// program to find min and max in a given array with min number of comparisions

#include <stdio.h>
#include <stdlib.h>

struct element
{
	int min;
	int max;
};

struct element divide(int array[],int low,int high)
{
	struct element e;
	struct element eleft,eright;
	struct element final;
	if(high == low+1) 
	{
		if(array[0] < array[1]) 
		{
			e.min = array[0];
			e.max = array[1];
			return e;
		}
		else
		{
			e.min = array[1];
			e.max = array[0];
			return e;
		}
	}
	else 
	{
		if (low == high)
	
		{
			e.min = array[0];
		e.max = array[1];
		return e;
		}
	}

		int mid = (low+high)/2;
		eleft = divide(array,low,mid);
		eright = divide(array,mid+1,high);

		if(eleft.min < eright.min)  final.min = eleft.min;
		else final.min = eright.min;

		if(eleft.max > eright.max) final.max = eleft.max;
		else final.max = eright.max;


		return final;
	}


int main()
{
	int array[10] = {4,5,7,1,6,2,3,9,8,0};
	//int array[10] = {2,1,0};
	struct element result = divide(array,0,9);

	printf("The mininum is %d\n",result.min );
	printf("The maximum is %d\n", result.max );

	return 0;
}