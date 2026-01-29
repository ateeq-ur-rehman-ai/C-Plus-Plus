// Queue implementation using an array in C++

#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int queue[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int item) {
        if (rear == SIZE - 1) { 
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) { 
            front = 0;
        }
        rear++;
        queue[rear] = item;
        cout << item << " inserted\n";
    }

    void dequeue() {
        if (front == -1 || front > rear) { 
            cout << "Queue Underflow\n";
            return;
        }
        cout << queue[front] << " deleted\n";
        front++;
        if (front > rear) { 
            front = rear = -1;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.display();

    return 0;
}
