/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
   // struct Node *test = head->prev;
    struct Node *x = head;
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    
    if(!head) 
        {
        head = newnode;
        return head;
    }
    else
        {
        while(head)
            {
            if(data > head->data && data<=head->next->data)
                {
                newnode->next = head->next;
                head->next = newnode;
                newnode->prev = head;
                newnode->next->prev = newnode;
                return x;
            }
            else if(data < head->data && data>=head->prev->data)
                {
                newnode->prev = head->prev;
                head->prev = newnode;
                newnode->next = head;
                newnode->prev->next = newnode;
                return x;
            }
            else
                head = head->next;
        }
    }
    
}

