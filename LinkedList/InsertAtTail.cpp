#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

};

void insertAtHead(Node* &head, int val){
        Node* temp = new Node(val);
        temp -> next = head;
        head = temp;
}

void insertAtTail(Node* &tail, int t){
    Node* temp = new Node(t);
    tail -> next = temp;
    tail = temp;
}

void Print(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout << temp-> data << " ";
            temp = temp-> next;
        }
        cout << endl;
}

int main(){
    Node* newnode = new Node(1);
    Print(newnode);

    // pointed to head & tail
    Node* head = newnode;
    Node* tail = newnode;

    // print head
    insertAtHead(head, 2);
    Print(head);

    insertAtHead(head, 3);
    Print(head);

    // print tail
    insertAtTail(tail, 4);
    Print(tail);

    return 0;


}