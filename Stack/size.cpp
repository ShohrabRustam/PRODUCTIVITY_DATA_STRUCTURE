#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
    int _size =0;

public:
    Stack() { top = nullptr; }
    // Push operation
    void push(int x) ;
    void pop() ;
    bool isEmpty();
    int size();
};

int Stack::size() {
    return _size;
}

bool Stack::isEmpty() {
    return top == nullptr;
}
void Stack:: pop() {
    if (isEmpty()) {
        cout << "Stack Underflow\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    cout << temp->data << " popped from stack\n";
    _size--;
    delete temp;
}

void Stack:: push(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    cout << x << " pushed onto stack\n";
    _size++;
}

int main() {
    Stack s;

    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.pop();
    cout << "Size of stack: " << s.size() << endl;

    return 0;
}
