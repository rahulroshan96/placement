/* If you get stuck somewhere do the pen and paper work */
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *link;
}; 
struct Node *top = NULL;
struct Node *first = NULL;
struct Node *Node(int element)
{
	struct Node *newNode = NULL;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = element;
	newNode->link = NULL;
	return newNode;
}
int push(int element)
{
	struct Node *newNode = Node(element);
	//printf("\n this is new node %d \n",newNode->data);
		if(top == NULL)
		{
			newNode->link = top;
		top = newNode;
		first = newNode;
		}
		else
		{
			/* here is the problem in code */
			newNode->link = top;
		top = newNode;
		}

		return ;
}
int stackprintf()
{
	struct Node *f = NULL;
	f = top;
	while(f)
	{
		printf("\n\t\t\t%d",f->data);
		f = f->link;
	}
	return ;
}
int main()
{
	struct Node *f = NULL;
	f = first;
	push(10);
	push(20);
	push(30);
	push(40);
	/*printf("\n\t\t\t%d",top->data);
	printf("\n\t\t\t%d",top->link->data);
	printf("\n\t\t\t%d",top->link->link->data);
	printf("\n\t\t\t%d",top->link->link->link->data);*/
	stackprintf();
}