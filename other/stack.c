#include<stdio.h>
int s[5];
int top = 0;
int push(int *, int);
int pop(int *);
int stackprintf(int *);

int push(int *s, int element)
{
	/* checking for stack overflow */
	if(top == 4) 
	{
		printf("\n The stack is overflow");
		return;
	}
	else
	{
		s[++top] = element;
		return;
	} 
}
int pop(int *s)
{
	/* checking for stack underflow */
	if(top == 0) 
	{
		printf("The stack is underflow \n");
		return;
	}
	else 
	{
		s[top] = 5000;
		--top;
		return;
	}
}
int stackprintf(int *s)
{
	int t = top;
	while( t!=0 )
		{
			printf("\n\t%d",s[t]);
			t--;
		}
		printf("\n\n");
	return;
}
int main()
{
	push(s,10);
	push(s,20);
	push(s,30);
	push(s,40);
	pop(s);
	stackprintf(s);
}
