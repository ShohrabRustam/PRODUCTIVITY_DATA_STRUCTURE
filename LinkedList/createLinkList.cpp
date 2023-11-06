
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};//such a structure known as self referential structure

int main (){
    /* Initialize nodes */
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;


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
    
    // [1 |address2]->[2 |address3]->[3 |NULL]->
}



