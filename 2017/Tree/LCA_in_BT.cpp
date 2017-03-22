#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* getNode(int n){
	struct Node* p = NULL;
	p = (struct Node*)malloc(sizeof(struct Node));
	p->data = n;
	p->right = NULL;
	p->left = NULL;
	return p;
}

struct Node* insertion(struct Node *root, int n){
	struct Node *temp,*prev=NULL;
	struct Node *newNode = getNode(n);
	if(!root){
		return newNode;
	}
	temp = root;
	while(temp){
		if(n <= temp->data){
			prev = temp;
			temp = temp->left;
		}else{
			prev = temp;
			temp = temp->right;
		}
	}
	if(n<=prev->data)
		prev->left = newNode;
	else
		prev->right = newNode;

	return root;
}

void inorder(struct Node *root){
	if(root){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

struct Node* LCA(struct Node *root, int x, int y){
	if(root){
		if(root->data == x || root->data == y)
			return root;

		struct Node* l = LCA(root->left, x, y);
		struct Node* r = LCA(root->right, x, y);

		if(l && r) return root;
		
		if(l) 
			return l; 
		else 
			return r;

	}else return NULL;
}

int main(){
	struct Node* root = NULL;
	root = insertion(root,4);
	root = insertion(root,2);
	root = insertion(root,3);
	root = insertion(root,1);
	root = insertion(root,6);
	root = insertion(root,7);
	root = insertion(root,5);
	root = insertion(root,8);

	struct Node *lcaNode=NULL;
	lcaNode = LCA(root, 7,8);
	cout<<lcaNode->data;
	return 0;
}