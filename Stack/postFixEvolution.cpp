#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <stack>

using namespace std;

// Generic Node for template Stack
template <typename T>
struct Node {
    T data;
    Node* next;
};

// Generic Stack Implementation
template <typename T>
class Stack {
    Node<T>* _top;
    int _size = 0;

public:
    Stack() : _top(nullptr), _size(0) {}

    void push(T x);
    void pop();
    bool isEmpty();
    int size();
    T top();
    T peek();  // alias to top()
    
    // Expression utilities — will be specialized
    bool isOperator(char c);
    bool isOperand(char c);
    int precedence(char c);
    string infixToPostfix(string expr);
    string infixToPrefix(string expr);
    int postFixEvolution(string expr);

};

// ---------- Generic Stack Functions ----------

template <typename T>
void Stack<T>::push(T x) {
    Node<T>* newNode = new Node<T>;
    newNode->data = x;
    newNode->next = _top;
    _top = newNode;
    _size++;
}

template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) return;
    Node<T>* temp = _top;
    _top = _top->next;
    _size--;
    delete temp;
}

template <typename T>
bool Stack<T>::isEmpty() {
    return _top == nullptr;
}

template <typename T>
int Stack<T>::size() {
    return _size;
}

template <typename T>
T Stack<T>::top() {
    if (isEmpty()) {
        return T(); // default value
    }
    return _top->data;
}

template <typename T>
T Stack<T>::peek() {
    return top();
}

// ---------- Expression Handling Specializations ----------

// Specialize isOperator for string stack (used as wrapper class)
template <>
bool Stack<string>::isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Specialize isOperand for string stack
template <>
bool Stack<string>::isOperand(char c) {
    return isalnum(c); // letters or digits
}

// Specialize precedence for string stack
template <>
int Stack<string>::precedence(char c) {
    if (c == '^') return 3;
    else if (c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    return -1;
}

// Infix to Postfix Conversion
template <>
string Stack<string>::infixToPostfix(string expr) {
    stack<char> s;
    string postfix;

    for (char c : expr) {
        if (isOperand(c)) {
            postfix += c;
        }
        else if (c == '(') {
            s.push(c);
        }
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty()) s.pop(); // remove '('
        }
        else if (isOperator(c)) {
            while (!s.empty() && precedence(c) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

// Infix to Prefix Conversion
template <>
string Stack<string>::infixToPrefix(string infix) {
    reverse(infix.begin(), infix.end());

    for (char& c : infix) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }

    string postfix = infixToPostfix(infix);
    reverse(postfix.begin(), postfix.end());

    return postfix;
}

template <>
int Stack<string>::postFixEvolution(string postfix) {

  for(int i=0; i<postfix.length(); i++){
    if(isOperand(postfix[i]-'0')){
        Stack<int> exprConverter;
        exprConverter.push(postfix[i]);
    }else{
        int op1 = exprConverter.top();
        exprConverter.pop();
        int op2 = exprConverter.top();
        exprConverter.pop();

        switch(postfix[i]){
            case '+':
                exprConverter.push(op1 + op2);
                break;
            case '-':
                exprConverter.push(op1 - op2);
                break;
            case '*':
                exprConverter.push(op1 * op2);
                break;
            case '/':
                exprConverter.push(op1 / op2);
                break;
            case '^':
                exprConverter.push(pow(op1, op2));
                break;
        } 
    }
  }
}




int main() {
    Stack<string> exprConverter;
    string input;

    cout << "Enter an infix expression: ";
    cin >> input;

    string postfix = exprConverter.infixToPostfix(input);
    string prefix  = exprConverter.infixToPrefix(input);

    cout << "Postfix: " << postfix << endl;
    cout << "Prefix : " << prefix << endl;

    cout << "Postfix Evaluation: " << exprConverter.postFixEvolution(postfix) << endl;

    return 0;
}
