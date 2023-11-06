#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};//such a structure known as self referential structure

int main (){
    struct Node *p = NULL;
    // condition to check the pointer is not pointing anywhere
    if(p==0) 
    // true;
    if(p==NULL)
    //true;
    if(!p)
        // true;
}