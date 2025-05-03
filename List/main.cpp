#include <iostream>
#include "Node.h"  // Include your Node definition

using namespace std;

int main() {
    // Node* head = new Node{1, nullptr};
    Node * head = new Node;
    head->data = 1;
    head->next = nullptr;
    cout << "Node created with data: " << head->data << endl;
    delete head;
    return 0;
}