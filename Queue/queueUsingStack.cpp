#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStacks {
    stack<int> s1, s2;

    void transferS1toS2() {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

public:
    void enqueue(int x) {
        s1.push(x);
        cout << x << " enqueued\n";
    }

    // Dequeue operation (amortized O(1), worst-case O(n))
    void dequeue() {
        if (s2.empty()) {
            if (s1.empty()) {
                cout << "Queue Underflow\n";
                return;
            }
            transferS1toS2();
        }
        cout << s2.top() << " dequeued\n";
        s2.pop();
    }

    int front() {
        if (s2.empty()) {
            if (s1.empty()) {
                cout << "Queue is empty\n";
                return -1;
            }
            transferS1toS2();
        }
        return s2.top();
    }

    bool isEmpty() {
        return s1.empty() && s2.empty();
    }

    int size() {
        return s1.size() + s2.size();
    }
};

int main() {
    QueueUsingStacks q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front after 2 dequeues: " << q.front() << endl;

    q.enqueue(40);
    cout << "Size: " << q.size() << endl;

    while (!q.isEmpty()) {
        q.dequeue();
    }

    q.dequeue();  // Underflow test

    return 0;
}
