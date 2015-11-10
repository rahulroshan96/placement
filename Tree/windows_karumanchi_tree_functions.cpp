#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *getnode(int x)
{
    struct node *p;
    p = new struct node;
    //struct node *p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void preorder(struct node *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int Height(struct node *root)
{
    if(!root)
    {
        return -1;
    }
    else
    {
        return (1+max(Height(root->left),Height(root->right)));
    }
}
int leaf(struct node *root)
{
    if(root)
    {
        if(root->left == NULL && root->right == NULL)
        return 1;
    else
    {
        return leaf(root->left) + leaf(root->right);
    }
    }

}
int internal(struct node *root)
{
    if(root)
    {
        if((root->left && root->right) ||(root->left) || (root->right))
            return 1+internal(root->left) + internal(root->right);
        else
            return internal(root->left) + internal(root->right);
    }
}
int total(struct node *root)
{
    if(root)
    {
        return 1+total(root->left)+total(root->right);
    }
}
int maximum(struct node *root)
{
    if(root)
    {

        int data = root->data;
        return max(data,max(maximum(root->left),maximum(root->right)));
    }

}
bool find_element(struct node *root, int x)
{
    if(root)
    {
        if(root->data == x) return true;

            bool test= false;
            test = find_element(root->left,x);
            if(!test)
            test = find_element(root->right,x);
            return test;

    }
    else return false;
}
void insert(struct node *root, int x)
{

    if(root)
    {

    if(!root->left)
    {
        root->left = getnode(x);

    }
    else
    {
        insert(root->left,x);

    }
    }

}
int deep_node(struct node *root)
{
    vector<bool> visited(10,false);
    queue<struct node*> myQ;
    myQ.push(root);
    int temp;
    struct node *p = NULL;
    while(!myQ.empty())
    {
        p=myQ.front();
        if(p) // null nodes would also be enter into the queue so we have to take
            //care of them
        {

        temp = p->data;

            myQ.push(p->left);
            myQ.push(p->right);

        }
        myQ.pop();

    }
    return temp;
}
int main()
{
    struct node *root = getnode(1);
    root->left = getnode(2);
    root->right = getnode(3);
    root->left->right = getnode(4);
    root->right->right = getnode(5);
    //root->left->left = getnode(6);
    cout<<endl<<"preorder ";
    preorder(root);
    cout<<endl<<"postorder ";
    postorder(root);
    cout<<endl<<"inorder ";
    inorder(root);
    cout<<endl<<"Height ";
    cout<<Height(root);
    cout<<endl<<"total leaf nodes ";
    cout<<leaf(root);
    cout<<endl<<"total number of internal nodes ";
    cout<<internal(root);
    cout<<endl<<"total number of node ";
    cout<<total(root);
    cout<<endl<<"maximum element in tree is ";
    cout<<maximum(root);
    cout<<endl<<"is element 5 available in tree ";
    bool ele_avail = find_element(root,5);
    if(ele_avail) cout<<"yes available in tree ";
    else cout<<"not available in tree";
    cout<<endl<<"insert 6 in binary tree ";
    insert(root,6);
    preorder(root);
    cout<<endl<<"the deepest node of tree is ";
    cout<<deep_node(root);
    return 0;
}
