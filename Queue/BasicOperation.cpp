#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node* front;
    Node* rear;
    int _size;

public:
    Queue() {
        front = rear = nullptr;
        _size = 0;
    }

    // Basic queue operations
    void enqueue(int x);       // Add to rear
    void dequeue();            // Remove from front
    int frontElement();        // Return front element
    bool isEmpty();            // Check if queue is empty
    int size();                // Return size
};

// Enqueue operation
void Queue::enqueue(int x) {
    Node* newNode = new Node{x, nullptr};
    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    _size++;
    cout << x << " enqueued into Queue\n";
}

// Dequeue operation
void Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow\n";
        return;
    }
    Node* temp = front;
    front = front->next;
    if (front == nullptr) rear = nullptr;
    cout << temp->data << " dequeued from Queue\n";
    delete temp;
    _size--;
}

// Return front element
int Queue::frontElement() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    return front->data;
}

// Check if empty
bool Queue::isEmpty() {
    return front == nullptr;
}

// Return size
int Queue::size() {
    return _size;
}

// Main function
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front element: " << q.frontElement() << endl;
    q.dequeue();
    cout << "Front element: " << q.frontElement() << endl;
    cout << "Queue size: " << q.size() << endl;
    q.dequeue();

}