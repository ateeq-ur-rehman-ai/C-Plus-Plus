// Middle 

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string lyric;
    Node* next;
};

Node* head = NULL;

void addLyricAtPosition(string text, int pos) {
    Node* newNode = new Node();
    newNode->lyric = text;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void displayLyrics() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->lyric << endl;
        temp = temp->next;
    }
}

int main() {
    addLyricAtPosition("Twinkle twinkle little star", 1);
    addLyricAtPosition("How I wonder what you are", 2);
    addLyricAtPosition("Up above the world so high", 3);
    addLyricAtPosition("Inserted lyric in middle", 2);

    cout << "Song Lyrics:\n";
    displayLyrics();

    return 0;
}
