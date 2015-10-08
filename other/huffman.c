#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
	int freq;
	char data;
	struct node *left;
	struct node *right;
};

struct node *getNode(int freq, char data)
{
	struct node *p = (struct node*)malloc(sizeof(struct node));
	p->freq = freq;
	p->data = data;
	p->left = NULL;
	p->right = NULL;
}

void preorder(struct node* root)
{
	if(root)
	{
		printf("%c ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void decode_huff(struct node* root, char *string)
{
	char ch;
	int i=0;
	struct node *p = root;
	while((ch = string[i]) != '\0')
	{
		if(ch == '0')
		{
			root = root->left;
			if(root->data != '\0')
				{
					printf("%c",root->data);
					root = p;
				}
				i++;

		}
		else 
		{
			root = root->right;
			if(root->data != '\0')
			{
				printf("%c",root->data );
				root = p;
			}
			i++;
		}

	}
}
void main()
{
	struct node *root = getNode(5,'\0');
	root->left = getNode(2, '\0');
	root->right = getNode(3, 'A');
	root->left->left = getNode(1,'B');
	root->left->right = getNode(1,'C');

	preorder(root);
	decode_huff(root,"1001011");

}