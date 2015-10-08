#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};
struct Node *GetNode(int data)
{
	struct Node *p = (struct Node*) malloc(sizeof(struct Node));
	p->data = data;
	p->next = NULL;
	//printf("hello %d\n",p->data);
	return p;
}

struct Node *createLinkList(int n)
{
	srandom(time(NULL));
	struct Node* test = NULL;
	struct Node* head = NULL;

	while(n != 0)
	{

		int data = rand()%10;

		struct Node *p = GetNode(data);
		if(!test)
		{
			test = p;
			head = p;
		}
		else
			{
				test->next = p;
				test = test->next;
			}

			n--;
			//free(p);
	//		printf("%d\n", test->data);
	}
	return head;

}
int getValue(struct Node* head, int positionFromTail)
{
	int value = 0;
	if(!head)
		return -1;
	else
	{
		value = getValue(head->next,positionFromTail)+1;
		if(value == positionFromTail)
			return head->data;
		else return value;
	}
}

int main()
{
	/* code */
	int x = 0;
	int i =0;
	struct Node *head = createLinkList(7);
	struct Node *head1 = head;
	while(i!=7)
	{
		printf("\n%d ",head->data );
		head = head->next;
		i++;
	}
	printf("\n\n");
	x = getValue(head1,5);
	fflush(stdout);
	printf("%d\n", x);
	return 0;
}
