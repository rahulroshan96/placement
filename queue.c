#include <stdio.h>
#include <stdlib.h>

int queue[6];
int rear = 0;
int front = 0;

void enqueue(int element)
{
	if((rear == 5 && front == 0) || (front == rear + 1 )) 
	{
		printf("\n Overflow Queue");
		return;
	}
	else
	{
		if(rear == 0) front = 1;

		if(rear == 5) 
		{
			rear = 0;
			queue[++rear] = element;
			return;
		}
		else
		{
			queue[++rear] = element;
			return;
		}


	}
}
void dequeue()
{
	if(front == 0)
	{
		printf("\n Underflow");
		return;
	}
	else
	{
		queue[front] = 0;

		if(front == rear == 5) 
		{
			front = rear = 0;
		}
		else if(front == 5)
		{
			front = 1;

		}
		else front++;
	}
}

void main()
{
	int i;
	dequeue();
	enqueue(10);
	enqueue(20);
	
	
	for(i = 1;i<6;i++)
		printf("\n\t\t%d",queue[i]);
	printf("\n%d \t %d",rear,front);

	dequeue();
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
for(i = 1;i<6;i++)
		printf("\n\t\t%d",queue[i]);
	printf("\n%d \t %d",rear,front);
	
	
}