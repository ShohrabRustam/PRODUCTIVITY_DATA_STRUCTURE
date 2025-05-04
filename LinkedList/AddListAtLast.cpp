#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*head, *tail;

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
        tail = *head;
    }else{
        newNode->next = *head;
        *head = newNode;
    }
    
}

void createLinkList(struct Node ** head,int data){
    Node *newNode = createNode(data);
    
    if(!*head){
        *head = newNode;
        tail = *head;
    }else{
       Node *p;
       p = *head;
        while(p->next){
            p=p->next;
        }
        p->next = newNode;
        tail = newNode;
    }
}


void addAtLast(struct Node ** head,int data){
    Node *newNode = createNode(data);
    
    if(!*head){
        *head = newNode;
        tail = *head;
    }else{
        tail->next = newNode;
        tail = tail->next;
    }
}


void printLinkedList(Node* root) {
    Node *p = root;
   while (p != NULL) {
      cout << p->data << " -> ";
      p = p->next;
   }
   cout << "NULL" << endl;
   delete[] p;
}

int main(){
    Node *head = NULL;
    createLinkList(&head,10);
    createLinkList(&head,20);
    createLinkList(&head,30);
    createLinkList(&head,40);
    addAtFirstNode(&head,15);
    addAtLast(&head,5);
    printLinkedList(tail);

}