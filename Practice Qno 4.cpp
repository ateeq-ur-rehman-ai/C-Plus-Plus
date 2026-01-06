#include <iostream>
using namespace std;

struct Node {
    int id;
    string name;
    Node* next;
};
void insertFirst(Node*& head, int id, string name) {
    Node* newNode = new Node();
    newNode->id = id;
    newNode->name = name;
    newNode->next = head;
    head = newNode;
}
void deleteFirst(Node*& head) { 
    if (head == NULL) {
        cout << "Queue is empty:";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "[" << temp->id << ", " << temp->name << "] -> ";
        temp = temp->next;
    }
    cout << "NULL ";
}

int main() {
    Node* head = NULL;
    insertFirst(head, 101, "Ali");
    insertFirst(head, 202, "Sara");
    cout << "Queue after vip: ";
    display(head);
    deleteFirst(head);
    cout << "Queue after first customer: ";
    display(head);

    return 0;
}
