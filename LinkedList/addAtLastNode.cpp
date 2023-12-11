#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};


Node * createNode(int data){
    Node * newNode = new Node;
    newNode->data = data;
    newNode->next =NULL;
    return newNode;
}

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

void addAtFirstNode(struct Node ** head,int data){
    Node *newNode = createNode(data);
    if (!*head){
        *head = newNode;
    }else{
        newNode->next = *head;
        *head = newNode;
    }
    
}

void printLinkedList(Node* head) {
    Node *p = head;
   while (p != NULL) {
      cout << p->data << " -> ";
      p = p->next;
   }
   cout << "NULL" << endl;
   delete[] p;
}


int main(int argc, char **  arg){
  Node *head=NULL;
    addAtLastNode(&head,1);
    addAtFirstNode(&head,1);
    addAtLastNode(&head,2);
    addAtFirstNode(&head,2);
    addAtLastNode(&head,3);
    addAtFirstNode(&head,3);
    addAtLastNode(&head,4);
    addAtFirstNode(&head,4);
    addAtFirstNode(&head,5);
    addAtLastNode(&head,5);
    printLinkedList(head);
    return 0;
}
