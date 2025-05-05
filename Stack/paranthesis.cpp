#include <iostream>
#include <string>

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
    bool checkParanthesis(string str);

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

bool Stack::checkParanthesis(string str) {
    Stack s;
    for (char c : str) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            if (s.isEmpty()) {
                return false;             
            }
            s.pop();
        }
    }
    return s.isEmpty() ? true : false; 
}

int main() {
    Stack s;
    cout<< "Enter a string with parentheses: ";
    string str;
    cin >> str;
    int isBalanced = s.checkParanthesis(str);
    cout << (isBalanced ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
