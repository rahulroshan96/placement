#include <iostream>
#include <stdio.h>
int array[100];

int f(int);


int main()
{
    for(int i =0;i<100;i++) array[i] = -1;
    int y = f(7);
    printf("%d",y);
    return 0;
}

int f(int n)
{
    if(n == 1) return 1;
    else if (n == 2) return 1;
    else if (n == 0) return 0;
    else 
    {
        if(array[n] == -1) 
        {
            array[n] = f(n-1) + f(n-2);
            return array[n];
        }
        else 
        return array[n];
    }
}
