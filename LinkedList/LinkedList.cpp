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

int main(){
    Node *head ;
   

}