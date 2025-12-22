// Beginning

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string lyric;
    Node* next;
};

Node* head = NULL;

void addLyricAtBeginning(string text) {
    Node* newNode = new Node();
    newNode->lyric = text;
    newNode->next = head;
    head = newNode;
}


void displayLyrics() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->lyric << endl;
        temp = temp->next;
    }
}

int main() {
    addLyricAtBeginning("Twinkle twinkle little star");
    addLyricAtBeginning("How I wonder what you are");
    addLyricAtBeginning("Up above the world so high");

    cout << "Song Lyrics:";
    displayLyrics();

    return 0;
}
