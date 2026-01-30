// Queue implementation using array in C++

#include <iostream>
using namespace std;

class Queue {
private:
    int* queue;
    int front;
    int size;
    int capacity;

public:
    Queue(int c) {
        capacity = c;
        queue = new int[c];
        front = 0;
        size = 0;
    }

    ~Queue() {
        delete[] queue;
    }

    void enqueue(int data) {
        if (size == capacity) {
            cout << "Queue is full" << endl;
            return;
        }
        queue[front + size] = data;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 1; i < size; i++) {
            queue[i - 1] = queue[i];
        }
        size--;
    }

    void display() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << queue[i] << " <- ";
        }
        cout << endl;
    }

    void getFront() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Front Element is: " << queue[front] << endl;
        }
    }
};

int main() {
    Queue q(4);

    q.display();

    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();

    q.enqueue(60);

    q.dequeue();
    q.dequeue();
    cout << "After two node deletions:" << endl;
    q.display();

    q.getFront();

    return 0;
}
