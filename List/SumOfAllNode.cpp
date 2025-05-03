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

void display(Node* head) {
    Node *p = head;
   while (p != NULL) {
      cout << p->data << " -> ";
      p = p->next;
   }
   cout << "NULL" << endl;
   delete[] p;
}

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int SumOfAllNodes(Node* head) {
    int sum = 0;
    Node* current = head;
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

int main() {
    Node *head = NULL;
    createLinkList(&head,10);
    createLinkList(&head,20);

    display(head);
    cout << "Number of nodes in the list: " << countNodes(head) << endl;
    cout << "Sum of all nodes in the list: " << SumOfAllNodes(head) << endl;

    delete head;
    return 0;
}