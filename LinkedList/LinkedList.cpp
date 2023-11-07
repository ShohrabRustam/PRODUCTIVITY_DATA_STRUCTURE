#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

 Node * createNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void createLinkList(struct Node ** head,int data){
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
    Node *head ;
    createLinkList(&head,10);
    createLinkList(&head,20);
    createLinkList(&head,30);
    createLinkList(&head,40);
    
    printLinkedList(head);

}