#include <iostream>
#include "Node.h"  // Include your Node definition

using namespace std;

Node * createNode(int data) {
    Node * newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

int main() {
    // Node* head = new Node{1, nullptr};
    Node * head = createNode(1);
    cout << "Node created with data: " << head->data << endl;
    delete head;
    return 0;
}