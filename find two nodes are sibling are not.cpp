// Example program
#include <iostream>
#include <string>
#include <queue>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *getnode(int n)
{
    struct node *p = new (struct node);
    p->data = n;
    p->left = NULL;
    p->right = NULL;
    return p;
}
bool find_sibling(struct node *root, int n1,int n2)
{
    bool test=false;
    if(root)
    {
        if(root->left && root->right)
        
            if(root->left->data == n1 && root->right->data == n2)
            return true;
        
            if(test == false)
            return test = find_sibling(root->left,n1,n2);
            if(test == false)
            return test = find_sibling(root->right,n1,n2);
        
    }
    return test;
}
int main()
{
 struct node *root1 = new (struct node);    
 root1 = getnode(1);
 root1->left = getnode(2);
 root1->right = getnode(3);
 root1->left->left = getnode(4);
 root1->right->left = getnode(5);
 root1->left->right = getnode(25);


 if(find_sibling(root1,4,25)) cout<<"yes both nodes are sibling"<<endl;
 else cout<<"no both nodes are not sibling";
 return 0;
}
