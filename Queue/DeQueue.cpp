#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node* prev;
    Node* next;
    Node(T val) : data(val), prev(nullptr), next(nullptr) {}
};

template <typename T>
class DeQueue {
private:
    Node<T>* front;
    Node<T>* rear;
    int _size;

public:
    DeQueue() : front(nullptr), rear(nullptr), _size(0) {}

    void insertFront(T x);
    void insertRear(T x);
    void deleteFront();
    void deleteRear();
    T getFront();
    T getRear();
    bool isEmpty();
    int size();
    void display();
};

// ---------- Implementation ----------

template <typename T>
void DeQueue<T>::insertFront(T x) {
    Node<T>* newNode = new Node<T>(x);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }
    _size++;
}

template <typename T>
void DeQueue<T>::insertRear(T x) {
    Node<T>* newNode = new Node<T>(x);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode;
    }
    _size++;
}

template <typename T>
void DeQueue<T>::deleteFront() {
    if (isEmpty()) {
        cout << "DeQueue Underflow at front\n";
        return;
    }
    Node<T>* temp = front;
    front = front->next;
    if (front) front->prev = nullptr;
    else rear = nullptr;
    delete temp;
    _size--;
}

template <typename T>
void DeQueue<T>::deleteRear() {
    if (isEmpty()) {
        cout << "DeQueue Underflow at rear\n";
        return;
    }
    Node<T>* temp = rear;
    rear = rear->prev;
    if (rear) rear->next = nullptr;
    else front = nullptr;
    delete temp;
    _size--;
}

template <typename T>
T DeQueue<T>::getFront() {
    if (isEmpty()) {
        cout << "DeQueue is empty\n";
        return T();
    }
    return front->data;
}

template <typename T>
T DeQueue<T>::getRear() {
    if (isEmpty()) {
        cout << "DeQueue is empty\n";
        return T();
    }
    return rear->data;
}

template <typename T>
bool DeQueue<T>::isEmpty() {
    return front == nullptr;
}

template <typename T>
int DeQueue<T>::size() {
    return _size;
}

template <typename T>
void DeQueue<T>::display() {
    Node<T>* temp = front;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

// ---------- Main Function for Testing ----------

int main() {
    DeQueue<int> dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertFront(1);

    cout << "DeQueue: ";
    dq.display();

    dq.deleteRear();
    dq.deleteFront();

    cout << "After deletions: ";
    dq.display();

    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;
    cout << "Size: " << dq.size() << endl;

    return 0;
}
