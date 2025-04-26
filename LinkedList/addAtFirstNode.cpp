#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node * createNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
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

int main(){
    Node *head=NULL;
    addAtFirstNode(&head,1);
    addAtFirstNode(&head,2);
    addAtFirstNode(&head,3);
    addAtFirstNode(&head,4);
    addAtFirstNode(&head,5);
    printLinkedList(head);
    return 0;
}



