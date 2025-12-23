// DLL End

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
    insertAtEnd("Up above the world so high");

    displayForward();
    return 0;
}
