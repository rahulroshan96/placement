#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

struct node* getNode(int n)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	p->data = n;
	p->next = NULL;
	return p;
}

void nthNode(struct node *head, int n)
{
	struct node *temp1=head;
	struct node *temp2=head;
	for(int i=0;i<n;i++)
	{
		temp1 = temp1->next;
	}
	while(temp1)
	{
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	cout<<"This is nth node from last"<<temp2->data;

}

void middle(struct node *head)
{
	struct node *temp1 = head;
	struct node *temp2 = head;
	while(temp2)
	{
		temp1 = temp1->next;
		temp2 = temp2->next->next;
	}
	cout<<"This is middle of the list " << temp1->data<<endl;
 }

int main()
{
	struct node *head = NULL;
	head = getNode(1);
	head->next = getNode(2);
	head->next->next = getNode(3);
	head->next->next->next = getNode(4);
	head->next->next->next->next = getNode(5);
	head->next->next->next->next->next = getNode(6);
	head->next->next->next->next->next->next = getNode(7);
	struct node *temp = head;
	/*while(temp)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}*/

	/* I returns nth node from the last*/
	//nthNode(head, 2);

	/*Middle of link list*/
	middle(head);
	return 0;
}