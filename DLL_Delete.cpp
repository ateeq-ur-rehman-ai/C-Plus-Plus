// DLL Delete

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void insertAtEnd(string text) {
    Node* newNode = new Node();
    newNode->data = text;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(string key) {
    Node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Node not found\n";
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
}

void displayForward() {
    Node* temp = head;
    cout << "List (Forward):\n";
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    insertAtEnd("Twinkle twinkle little star");
    insertAtEnd("How I wonder what you are");
    insertAtEnd("Inserted Node");
    insertAtEnd("Up above the world so high");

    cout << "Before Deletion:\n";
    displayForward();

    deleteNode("Inserted Node");

    cout << "\nAfter Deletion:\n";
    displayForward();

    return 0;
}
