#include<iostream>
using namespace std; 
struct Node{
    int data;
    Node *next;
};

// varible to show the size of the linklist
unsigned size = 0;

/* Function to create node   
   of the linked list */
Node * createNode(int data){
    Node *node = new Node;
    node->data = data;
    node->next = 0;
    return node;
}

/* Function to add the first node   
   of the linked list */
Node * addAtFirstNode(struct Node ** head,int data){
    Node *newNode = createNode(data);
    if (!*head){
        *head = newNode;
    }else{
        newNode->next = *head;
        *head = newNode;
    }
    size++;
    return *head;
}

/* Function to add the last node   
   of the linked list */
Node* addAtLastNode(Node ** head,int data){
    Node *newNode = createNode(data);
    Node *tempNode = *head;
    if (!tempNode){
        *head = newNode;
    }else{
        while(tempNode->next){
            tempNode = tempNode->next;
        }
        tempNode->next = newNode;  
    }
    size++;
    return *head;

}

/* Function to remove the first node   
   of the linked list */
Node * deletFirstNode(Node* head){
     if (head == NULL) 
        return NULL;
  
    // Move the head pointer to the next node 
    Node * temp = head; 
    head = head->next; 
  
    delete temp; 
    size--;
    return head;
}

/* Function to remove the last node   
   of the linked list */
Node* removeLastNode(struct Node* head) 
{ 
    if (head == NULL) 
        return NULL; 
  
    if (head->next == NULL) { 
        delete head; 
        size--;
        return NULL; 
    } 
  
    // Find the second last node 
    Node* second_last = head; 
    while (second_last->next->next != NULL) 
        second_last = second_last->next; 
  
    // Delete last node 
    delete (second_last->next); 
  
    // Change next of second last 
    second_last->next = NULL; 
    size--;
    return head; 
} 

/* Function to print the node   
   of the linked list */
void printLinkedList(Node* head) {
    Node *p = head;
   while (p != NULL) {
      cout << p->data << " -> ";
      p = p->next;
   }
   cout << "NULL" << endl;
   delete[] p;
}


int main()
{
    Node *head = NULL;
    head = addAtLastNode(&head,1);
    head = addAtFirstNode(&head,1);
    head = addAtLastNode(&head,2);
    head = addAtFirstNode(&head,2);
    head = addAtLastNode(&head,3);
    printLinkedList(head);
    cout <<"Size: "<<size<<endl;
    head = deletFirstNode(head); 
    head = deletFirstNode(head); 
    head = deletFirstNode(head); 
    printLinkedList(head);
    cout <<"Size: "<<size<<endl;

    head = removeLastNode(head);
    printLinkedList(head);
    cout <<"Size: "<<size<<endl;

    head = addAtFirstNode(&head,3);
    head = addAtLastNode(&head,4);
    head = addAtFirstNode(&head,4);
    head = addAtFirstNode(&head,5);
    head = removeLastNode(head);
    head = addAtLastNode(&head,5);
    printLinkedList(head);
    cout <<"Size: "<<size<<endl;
    
    return 0;
}