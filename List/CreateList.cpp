#include <iostream>
#include "Node.h"  // Include your Node definition

using namespace std;

Node * createNode(int data) {
    Node * newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void createLinkList(Node ** head,int data){
    Node *newNode = createNode(data);
    
    if(!*head){
        *head = newNode;
    }else{
       Node *p;
       p = *head;
        while(p->next){
            p=p->next;
        }
        p->next = newNode;
    }
}



int main() {
    Node *head = NULL;
    createLinkList(&head,10);
    createLinkList(&head,20);

    cout << "Node created with data: " << head->data << endl;
    delete head;
    return 0;
}