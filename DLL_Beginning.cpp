// DLL Beginning

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

void displayForward() {
    Node* temp = head;
    cout << "List (Forward):\n";
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    insertAtBeginning("How I wonder what you are");
    insertAtBeginning("Twinkle twinkle little star");
    insertAtBeginning("Up above the world so high");

    displayForward();
    return 0;
}
