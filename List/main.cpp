#include <iostream>
#include "Node.h"  // Include your Node definition

using namespace std;

int main() {
    Node* head = new Node{1, nullptr};
    cout << "Data: " << head->data << endl;
    delete head;
    return 0;
}