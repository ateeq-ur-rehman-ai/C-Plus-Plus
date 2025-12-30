//  Insert Fisrt 

#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
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
    void insertlast(int val){
        if(head== nullptr){
            Node* newnode = new Node(val);
            head=newnode;
            return;
        }
    Node* temp=head;
    while(temp!= nullptr){
        temp=temp->next;
    }
    Node* newnode = new Node(val);
    temp->next=newnode;
    }
    void printlist(){
        Node* temp=head;
        while (temp!= nullptr)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"Null"<<endl;
    }
};


int main(){
    linkedll list;
    list.insertfirst(4);
    list.insertfirst(7);
    list.insertfirst(8);
    list.printlist();
    return 0;
}