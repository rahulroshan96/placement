/* insert, delete, update, find, travel*/
#include <iostream>
#include <cstdlib>
#include <queue>
#include <map>

using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* getNode(int n)
{
    struct node* p = (struct node*)malloc(sizeof(struct node*));
    p->data = n;
    p->right = NULL;
    p->left = NULL;
    return p;
};
void preorder(struct node* root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root)
{
    if(root)
    {

        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
void inorder(struct node* root)
{
    if(root)
    {
        inorder(root->left);
         cout<<root->data<<" ";
        inorder(root->right);
    }
}
void bfs(struct node* root)
{
    queue<struct node*> myQ;
    myQ.push(root);
    while(!myQ.empty())
    {
        struct node* p = myQ.front();
        myQ.pop();
        cout<<p->data<<" ";
        if(p->left) myQ.push(p->left);
        if(p->right) myQ.push(p->right);
    }
}

int height(struct node* root)
{
    if(!root)
        return 0;
    else
    {
        return 1 + max(height(root->left),height(root->right));
    }
}

int height_q(struct node* root)
{
    int level=0;
    queue<struct node*> myQ;
    if(root)
    myQ.push(root);
    else return 0;
    myQ.push(NULL);
    while(!myQ.empty())
    {
        struct node*p = myQ.front();
        myQ.pop();
        if(p!=NULL)
        {
            cout<<p->data<<" ";            
            if(p->left) myQ.push(p->left);
            if(p->right) myQ.push(p->right);
        }
        else
        {
            if(!myQ.empty())
                myQ.push(NULL);
            level++;
        }
    }
    return level;
}
int leafs(struct node* root)
{
    if(root)
    {
    if(!root->left && !root->right)
        return 1;
    else
    {
        return leafs(root->left) + leafs(root->right);
    }
    }
    else return 0;
}
int internal(struct node *root)
{
    if(root)
    {
        if(!root->left && !root->right)
        return 0;
        else return 1+internal(root->left)+internal(root->right);
    }
    else return 0;
}
bool structure(struct node* root, struct node* root1)
{
    if(!root && !root1)
        return true;
    if(!root || !root1)
        return false;
    return (root->data ==root1->data && structure(root->left,root1->left) && structure(root->right,root1->right));
}
void finds(map<int,int> &mymap, struct node *root, int index)
{
    if(root)
    {
    map<int,int>::iterator it=mymap.begin();    
    it = mymap.find(index);
    if(it!=mymap.end())
    {
        mymap[index] += root->data;
    }
    else
    {
        mymap.insert(make_pair(index,root->data));
    }
    finds(mymap,root->left,index-1);
    finds(mymap,root->right,index+1);
    }
}

void findsum(struct node* root, int index)
{
    map<int,int> mymap;
    finds(mymap,root,index);
    map<int,int>::iterator it;
    for(it=mymap.begin();it!=mymap.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second;
        cout<<endl;
    }

}

/* Function to print tree by level order traversal*/

void level(struct node *root)
{
    queue<struct node *> myQ;
    myQ.push(root);
    myQ.push(NULL);
    while(!myQ.empty())
    {
        struct node *temp = myQ.front();
        myQ.pop();
        if(temp == NULL)
            {
                if(!myQ.empty()) // very important condition
                myQ.push(NULL);
            }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            myQ.push(temp->left);
            if(temp->right)
            myQ.push(temp->right);
        }
    }
}

int main()
{
    struct node* root=NULL;
    root = getNode(10);
    root->left = getNode(20);
    root->right = getNode(30);
    root->right->right = getNode(40);
    root->right->left = getNode(100);

    struct node* root1 = NULL;
    root1 = getNode(10);
    root1->left = getNode(20);
    root1->right = getNode(30);
    root1->right->right = getNode(40);

    //preorder(root);
    //postorder(root);
    //inorder(root);
    //bfs(root);
    //cout<<height(root);
    //cout<<height_q(root);
    //cout<<leafs(root);
//    cout<<internal(root);
  //  if(structure(root,root1))
   //     cout<<"similar";
    //else cout<<"not similar";
    //findsum(root,0);
    //level(root);
    diameter(root);


    return 0;
}
