int main() {
    Stack<char> s;
    cout << "Enter a string with parentheses: ";
    string infix;
    cin >> infix;
    string postfix = s.infixToPostfix(infix);
    cout << "Prefix expression: " << postfix << endl;
    return 0;
}