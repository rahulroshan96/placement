#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};


struct Node *getNode(int n){
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    p->data = n;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void inorder(struct Node *root){
    if(root){
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}

void preorder(struct Node *root){
    if(root){
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node *root){
    if(root){
        preorder(root->left);
        preorder(root->right);
        cout<<root->data<<endl;
    }
}


int main(){
    struct Node *root = getNode(100);
    root->left = getNode(1);
    root->right = getNode(200);
    root->left->left = getNode(12);
    root->right->right = getNode(22);
    inorder(root);

    return 0;
}