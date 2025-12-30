// Insert Last 

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class linkedll {
public:
    Node* head;

    linkedll() {
        head = nullptr;
    }

  
    void insertfirst(int val) {
        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
    }

    
    void insertlast(int val) {
        Node* newnode = new Node(val);

        if (head == nullptr) {
            head = newnode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {   
            temp = temp->next;
        }

        temp->next = newnode;
    }

    void printlist() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    linkedll list;

    list.insertlast(4);
    list.insertlast(7);
    list.insertlast(8);
    list.printlist();
    
    return 0;
}
