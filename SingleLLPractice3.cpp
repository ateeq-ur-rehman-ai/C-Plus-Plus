// End

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string lyric;
    Node* next;
};

Node* head = NULL;

void addLyricAtEnd(string text) {
    Node* newNode = new Node();
    newNode->lyric = text;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

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
    addLyricAtEnd("Twinkle twinkle little star");
    addLyricAtEnd("How I wonder what you are");
    addLyricAtEnd("Up above the world so high");

    cout << "Song Lyrics:\n";
    displayLyrics();

    return 0;
}
