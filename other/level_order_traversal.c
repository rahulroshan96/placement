#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node* getNode(int data)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	return p;
}

void preorder(struct node* root)
{
	if(root)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}


void level0rder(struct node *root)
{

	int count = 0;
	int j=0;
	int x =0;
	int i =0;
	struct node *array[50];

	for(x=0;x<50;x++) 
		array[x] = NULL;

		/*for(x=0;x<50;x++)
		{
			if(array[x] == NULL) printf("%d hello ",x+1);
		}*/

	if(root)
	{
		array[0] = root;
		count++;
		i++;
	}
	while(root)
	{
		//printf("%d ",root->data);
		if(root->left) 
		{
			array[i]= root->left;
			count++;
			i++;
		}
		if(root->right) 
		{
			array[i] = root->right;
			count++;
			i++;
		}
		j++;
		root = array[j];

	}
	root = array[0];
	for(i=0;i<count;i++)
		{
			printf("%d ", root->data);
			root = array[i+1];
		}
}

void main()
{

	struct node *root = getNode(3);
	root->left = getNode(5);
	root->right = getNode(2);
	root->left->left = getNode(1);
	root->left->right = getNode(4);
	root->right->left = getNode(6);

//	preorder(root);

	level0rder(root);
}
