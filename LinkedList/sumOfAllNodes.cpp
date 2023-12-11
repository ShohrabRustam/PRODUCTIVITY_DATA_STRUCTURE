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

// function to insert a Node at required position 

void insertNodeAtGivenPos(Node** head, int pos, int data) 
{ 
    // This condition to check whether the 
    // position given is valid or not.
    
    if (pos < 1 || pos > size + 1) 
        cout << "Invalid position!" << endl; 
    else { 
        // Keep looping until the pos is zero 
        while (pos--) { 
  
            if (pos == 0) { 
  
                // adding Node at required position 
                Node* temp = createNode(data); 
  
                // Making the new Node to point to  
                // the old Node at the same position 
                temp->next = *head; 
  
                // Changing the pointer of the Node previous  
                // to the old Node to point to the new Node 
                *head = temp; 
            } 
            else
              // Assign double pointer variable to point to the  
              // pointer pointing to the address of next Node  
              head = &(*head)->next; 
        } 
        size++; 
    }

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

int sumOfAllNodes(Node * head){
    if(head== NULL){
        return 0;
    }else{
        return sumOfAllNodes(head->next) + head->data;
    }
}


int main()
{
    Node *head = NULL;
    head = addAtLastNode(&head,1);
    head = addAtFirstNode(&head,1);
    head = addAtLastNode(&head,2);
    head = addAtFirstNode(&head,2);
    head = addAtLastNode(&head,3);
    insertNodeAtGivenPos(&head,1,10);
    printLinkedList(head);
    cout<<"SUM OF ALL NODES : "<< sumOfAllNodes(head)<<endl;
    return 0;
}