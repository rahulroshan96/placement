#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
using namespace std;

struct Node{
	map<char, struct Node*> children;
	bool status=false;
};

struct Node* getNode(){
	struct Node *p = new struct Node;
	p->status = false;
	return p;
}

struct Node* insert(struct Node *root, string s){
	struct Node *head = root;
	for(int i=0;i<s.length();i++){
		if(root->children.find(s[i]) ==root->children.end()){
			struct Node *temp = new struct Node;
			root->children[s[i]] = temp;
			root = root->children[s[i]];
		}else{
			root = root->children[s[i]];
		}
	}
	root->status = true;
	return head;
}


void triePrint(struct Node *root){
	map<char, struct Node*>:: iterator it;
	for(it=root->children.begin();it!=root->children.end();it++){
		cout<<(*it).first<<" ";
		triePrint(root->children[(*it).first]);
	}
	cout<<endl;
}

int main(){

	string s("rahul");
	struct Node *root = getNode();
	struct Node *temp = getNode();

	root = insert(root,s);
	root = insert(root, "roshan");
	triePrint(root);
	return 0;	
}