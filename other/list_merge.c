#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node* getNode(int data)
{
	struct node *p = (struct node*)malloc(sizeof(struct node));
	p->data = data;
	p->next = NULL;

	return p;
}

struct node *mergeLists(struct node *A, struct node *B)
{
	struct node *newlist = NULL;
	struct node *newhead = NULL;
	struct node *headA = A;
	struct node *headB = B;

	if(!A)
		return B;

	if(!B)
		return A;

	if(A->data < B->data)
		{
			newlist = getNode(A->data);
			newhead = newlist;

			A = A->next;
		}

	else 
	{
		newlist = getNode(B->data);
		newhead = newlist;
		B = B->next;
	}

	while(A && B)
	{
		if(A->data < B->data)
		{

			newhead->next = getNode(A->data);
			newhead = newhead->next;
			A = A->next;

		}
		else
		{
			newhead->next = getNode(B->data);
			newhead = newhead->next;
			B = B->next;
		}
	}
	if(!A)
	{
		while(B)
		{

			newhead->next = getNode(B->data);
			B = B->next;
		}
	}
	if(!B)
	{
		while(A)
		{
			newhead->next = getNode(A->data);
			A = A->next;
		}
	}

	return newlist;
}

int main()
{
	struct node *first = getNode(1);
	first->next = getNode(3);
	first->next->next = getNode(5);

	struct node *second = getNode(2);
	second->next = getNode(4);
	second->next->next = getNode(6);
	second->next->next->next = getNode(7);

	struct node *newlist = mergeLists(first,second);

	while(newlist)
	{
		printf("%d ",newlist->data);
		newlist = newlist->next;
	}
	return 0;
}