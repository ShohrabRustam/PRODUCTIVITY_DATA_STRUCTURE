#include<iostream>
using namespace std; 
struct Node{
    int data;
    Node *next;
};

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
void addAtFirstNode(struct Node ** head,int data){
    Node *newNode = createNode(data);
    if (!*head){
        *head = newNode;
    }else{
        newNode->next = *head;
        *head = newNode;
    }
}

/* Function to add the last node   
   of the linked list */
void addAtLastNode(Node ** head,int data){
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
    addAtLastNode(&head,1);
    addAtFirstNode(&head,1);
    addAtLastNode(&head,2);
    addAtFirstNode(&head,2);
    addAtLastNode(&head,3);
    printLinkedList(head);
    head = deletFirstNode(head); 
    head = deletFirstNode(head); 
    head = deletFirstNode(head); 
    printLinkedList(head);
    head = removeLastNode(head);
    printLinkedList(head);
    addAtFirstNode(&head,3);
    addAtLastNode(&head,4);
    addAtFirstNode(&head,4);
    addAtFirstNode(&head,5);
    head = removeLastNode(head);
    addAtLastNode(&head,5);
    printLinkedList(head);
    
    return 0;
}