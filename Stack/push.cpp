#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top; 

public:
    Stack() { top = nullptr; }

    // Push operation
    void push(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = top;
        top = newNode;
        cout << x << " pushed onto stack\n";
    }


    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack s;

    s.push(10); 
    s.push(20); 
    s.push(30); 

    return 0;
}
