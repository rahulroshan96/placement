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
		if(temp2->next)
		{
			temp1 = temp1->next;
		temp2 = temp2->next->next;
		}
		else break;
	}
	cout<<"This is middle of the list " << temp1->data<<endl;
 }

void del(struct node *head)
{
	if(head)
	{
		del(head->next);
		free(head);
	}
}

struct node *p = NULL; // p is the head of new reverse linked list

void reverse(struct node *head, struct node *curr, struct node *prev)
{
	if(curr)
	{
		reverse(head, curr->next, curr);
		if(!curr->next) p = curr;
		curr->next = prev;

	}
}

bool loop(struct node *head)
{
	struct node *temp1 = head;
	struct node *temp2 = head;

	if(!temp2->next || !temp2->next->next)
		return false;

	temp1 = temp1->next;
	temp2 = temp2->next->next;

	while(temp2->next->next && temp2)
	{
		
		if(temp1 != temp2) 
		{
			temp1 = temp1->next;
			temp2 = temp2->next->next;
		}
		else
			return true;
	}
	return false;
}

struct node *merge(struct node *head, struct node *head1)
{
	if(!head && !head1) return NULL;
	if(!head) return head1;
	if(!head1) return head;

	struct node *m = NULL;
	/* conditions to handle if anyone of the list is empty*/
	if(head->data < head1->data) 
	{
		m = getNode(head->data);
		head = head->next;
	}
	else 
	{
		m = getNode(head1->data);
		head1 = head1->next;
	}
	struct node *t = m;
	
/*head moves and copies the data value to the new list m, when head->data is less than head1->data and vice versa*/
	while(head && head1)
	{
		if(head->data < head1->data)
		{
			m->next = getNode(head->data);
			m = m->next;
			head = head->next;
		}
		else
		{
			m->next = getNode(head1->data);
			m = m->next;
			head1 = head1->next;
		}
	}
	/*if any of the list reaches to NULL then append the remaining list to the m list*/
	if(!head)
		m->next = head1;
	else 
		m->next = head;

	return t;
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
	head->next->next->next->next->next->next->next = getNode(8);
	//head->next->next->next->next->next->next->next->next = head; // this line is for loop detection

	struct node *head1 = NULL;
	head1 = getNode(-1);
	head1->next = getNode(-2);
	head1->next->next = getNode(31);
	head1->next->next->next = getNode(41);
	head1->next->next->next->next = getNode(51);
	head1->next->next->next->next->next = getNode(61);
	head1->next->next->next->next->next->next = getNode(71);
	head1->next->next->next->next->next->next->next = getNode(81);
	//struct node *temp = head; // this is printing the linked list

	/*while(temp)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}*/

	/* I returns nth node from the last*/
	//nthNode(head, 2);

	/*Middle of link list*/
	//middle(head);

	/*Function to delete the entire linked list*/
		//del(head);

	/*Reverse a linked list*/
		// reverse(head,head,NULL);
		// cout<<p->data;

	/*Find loop in linked list*/
		// if(loop(head)) cout<<"Loop is detected"<<endl;
		// else cout<<"No loop is not detected";

	/*Merge two linked list*/
		/*struct node *m = merge(head, head1);

while(m)
	{
		cout<<m->data<<" ";
		m = m->next;
	}
	cout<<endl;*/

	return 0;
}