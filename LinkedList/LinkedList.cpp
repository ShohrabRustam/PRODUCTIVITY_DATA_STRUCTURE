#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node * createNode(data){
    struct Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main(){


}