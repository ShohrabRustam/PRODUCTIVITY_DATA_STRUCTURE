#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};//such a structure known as self referential structure

int main (){
    struct Node *p;
     p = new Node;
     p->data = 5;
     p->next = NULL;
}