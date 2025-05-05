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

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack\n";
        delete temp;
    }


    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack s;

    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.pop();

    return 0;
}
