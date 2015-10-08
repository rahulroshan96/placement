#include <stdio.h>
#include <stdlib.h>


int max(int a, int b)
{
	if(a<b) return b;
	else return a;
}

int test(int *weight, int *profit, int m, int n)
{
	if(m == 0 || n==0)
	{
		return 0;
	}
	else
	{
		if(weight[n-1] < m)
		{
			return profit[n-1] + max(test(weight--, profit--, m-weight[n-1], n-1), test(weight--, profit--, m, n-1));
		}
		else
			return max(test(weight--, profit--, m-weight[n-1], n-1), test(weight--, profit--, m, n-1));
	}
}

void main()
{	
	int weight[4] = {10,20,30,40};
	int profit[4] = {15,20,25,30};
	int m = 70;

	int total_profit = 0;
	int n = sizeof(weight)/sizeof(weight[0]);
	total_profit = test(&weight[n-1],&profit[n-1],m,n);
	
	printf("The total profit is %d\n", total_profit);
}