
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};//such a structure known as self referential structure
void displayLinkedList(struct Node *p){
 struct Node *temp = p;
    while(temp != NULL){
        cout << "Node " << temp->data<<endl;
        temp = temp->next;
    }
}
int main (){
    
    /* Initialize nodes */
    struct Node *head;
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;


    /* Allocate memory */
    one = new Node;
    two = new Node;
    three = new Node;

    /* Assign data values */
    one->data = 1;
    two->data = 2;
    three->data=3;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = NULL;

    /* Save address of first node in head */
    head = one;

    displayLinkedList(head);
    
}



