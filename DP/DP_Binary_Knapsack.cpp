// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<stdio.h>
 
// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }
 
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
 // K[2][2], this cell represents the maximum profit after taking 1st and 2nd items with maximum weight 2
   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
                 // two parts are there taking the item and not taking the item
                 // val[i-1] + K[i-1][w-wt[i-1]] so when taking the item, we add the value of that item with the profit of (so far items except current item with 
                 // with reducing weight of current item)
                 // K[i-1][w] when not taking the item, simply take the profit upto previous items according to weight
            
           else
                 K[i][w] = K[i-1][w];
                 // K[i-1][w] when not taking the item, simply take the profit upto previous items according to weight
       }
   }
 
   return K[n][W];
}
 
int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}
