#include <iostream>
using namespace std;

struct Node {
    int songID;
    string title;
    Node* prev;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

Node* createNode(int id, string title) {
    Node* newNode = new Node();
    newNode->songID = id;
    newNode->title = title;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertFirst(int id, string title) {
    Node* newNode = createNode(id, title);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertLast(int id, string title) {
    Node* newNode = createNode(id, title);
    if (tail == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void deleteFirst() {
    if (head == NULL) return;
    Node* temp = head;
    if (head == tail) {
        head = tail = NULL;
    } else {
        head = head->next;
        head->prev = NULL;
    }
    delete temp;
}

void deleteLast() {
    if (tail == NULL) return;
    Node* temp = tail;
    if (head == tail) {
        head = tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
    }
    delete temp;
}

void display() {
    Node* temp = head;
    cout << "Playlist:\n";
    while (temp != NULL) {
        cout << temp->songID << " - " << temp->title << endl;
        temp = temp->next;
    }
}

int main() {

    insertFirst(1, "Shape of You");
    insertLast(2, "Believer");
    insertFirst(3, "Perfect");

    deleteFirst();
    deleteLast();

    display();

    return 0;
}
