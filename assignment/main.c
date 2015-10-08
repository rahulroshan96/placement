#include <stdio.h>
#include <stdlib.h>

int n = 4;

int test(int *weight, int *profit, int m, int i, int prev)
{
	if(i>=n)
	{
		return 0;
	}
	else
	{
		int l = 0;
		int r = 0;

		if(i != n-1)

		{

		l = test(weight++, profit++, m, i++, 0);
		r = test(weight++, profit++, m-weight[i], i++, 1);

		}

		if(m>=0 && prev == 1)
		{
			int max;
			if(l > r) max = l;
			else max = r;

			return max + profit[i];
		}
		else
		{
			int max;
			if(l > r) max = l;
			else max = r;
			return max;
		}
	}
}

void main()
{
	int weight[4] = {10,20,30,40};
	int profit[4] = {15,20,25,30};
	int m = 70;

	int total_profit = 0;
	total_profit = test(weight,profit,m,0,0);

	printf("The total profit is %d\n", total_profit);
}
