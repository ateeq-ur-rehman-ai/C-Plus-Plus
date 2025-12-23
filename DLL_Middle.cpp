// DLL Middle

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

void insertAtBeginning(string text) {
    Node* newNode = new Node();
    newNode->data = text;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

void insertAtPosition(string text, int pos) {
    if (pos == 1) {
        insertAtBeginning(text);
        return;
    }

    Node* newNode = new Node();
    newNode->data = text;

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Invalid Position\n";
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
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
    insertAtBeginning("Twinkle twinkle little star");
    insertAtBeginning("How I wonder what you are");

    insertAtPosition("Inserted in Middle", 2);

    displayForward();
    return 0;
}
