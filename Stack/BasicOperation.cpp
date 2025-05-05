#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* _top;
    int _size =0;

public:
    Stack() { _top = nullptr; }
    // Push operation
    void push(int x) ;
    void pop() ;
    bool isEmpty();
    int size();
    int peak();
    int top() ;
};

int Stack::size() {
    return _size;
}

bool Stack::isEmpty() {
    return _top == nullptr;
}
void Stack:: pop() {
    if (isEmpty()) {
        cout << "Stack Underflow\n";
        return;
    }
    Node* temp = _top;
    _top = _top->next;
    cout << temp->data << " popped from stack\n";
    _size--;
    delete temp;
}

void Stack:: push(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = _top;
    _top = newNode;
    cout << x << " pushed onto stack\n";
    _size++;
}

int Stack::top() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return -1;
    }
    return _top->data;
}

int Stack::peak(){
    return top();
}


int main() {
    Stack s;

    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.pop();
    cout << "Size of stack: " << s.size() << endl;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    cout << "Top element: " << s.top() << endl;
    cout << "Peak element: " << s.peak() << endl;
    cout << "Size of Stack : " << s.size() << endl;

    return 0;
}
