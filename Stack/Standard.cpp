#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node* next;
};

template <typename T>
class Stack {
    Node<T>* _top;
    int _size = 0;

public:
    Stack() { _top = nullptr; }

    void push(T x);
    void pop();
    bool isEmpty();
    int size();
    T top();
    T peak();
    bool checkParanthesis(string str); // Specialization case
};

template <typename T>
int Stack<T>::size() {
    return _size;
}

template <typename T>
bool Stack<T>::isEmpty() {
    return _top == nullptr;
}

template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow\n";
        return;
    }
    Node<T>* temp = _top;
    _top = _top->next;
    cout << temp->data << " popped from stack\n";
    _size--;
    delete temp;
}

template <typename T>
void Stack<T>::push(T x) {
    Node<T>* newNode = new Node<T>;
    newNode->data = x;
    newNode->next = _top;
    _top = newNode;
    cout << x << " pushed onto stack\n";
    _size++;
}

template <typename T>
T Stack<T>::top() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return T(); // return default value
    }
    return _top->data;
}

template <typename T>
T Stack<T>::peak() {
    return top();
}

// Specialization: Only works for char
template <>
bool Stack<char>::checkParanthesis(string str) {
    Stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (s.isEmpty()) return false;
            if ((c == ')' && s.top() != '(') ||
                (c == '}' && s.top() != '{') ||
                (c == ']' && s.top() != '['))
                return false;
            s.pop();
        }
    }
    return s.isEmpty();
}

int main() {
    Stack<char> s;
    cout << "Enter a string with parentheses: ";
    string str;
    cin >> str;
    bool isBalanced = s.checkParanthesis(str);
    cout << (isBalanced ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
