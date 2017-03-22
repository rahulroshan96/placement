#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *getNode(int n){
	struct Node *p = (struct Node*)malloc(sizeof(struct Node));
	p->data = n;
	p->next = NULL;
	return p;
}

struct Node *insertion(struct Node *root, int n){
	if(!root){
		root = getNode(n);
		return root;
	}else{
		struct Node *temp = root;
		while(temp->next){
			temp = temp->next;
		}
		temp->next = getNode(n);
		return root;
	}
}

bool listLength(struct Node *temp, int k){
	int i=1;
	while(i<=k && temp){
		i++;
		temp=temp->next;
	}
	if((i-1)<k) return false;
	else return true;
}

struct Node* reverse(struct Node *head, int k){
	struct Node *p=head, *q = NULL, *r = NULL,*temp=head;
	int count = 0;
	if(!listLength(temp,k)){
		return head;
	}
	while(p && count<k){
		q = p;
		p = p->next;
		q->next = r;
		r = q;
		count++;
	}

	if(p){
		head->next = reverse(p, k); 
	}
	return q;
	
}

int main(){
	struct Node *head = NULL;
	for(int i=1;i<12;i++){
		head = insertion(head, i);
	}
	struct Node *temp = head;
	head = reverse(temp, 3);
	cout<<endl;
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}

	return 0;
}