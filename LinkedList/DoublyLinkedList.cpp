#include <iostream>
using namespace std;

// doubly LinkedList

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node* &head, int newdata) {
    Node* newnode = new Node(newdata);
    if (head == NULL) {
        head = newnode;
    } else {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insertAtTail(Node* &head, int newdata1) {
    Node* newtail = new Node(newdata1);
    if (head == NULL) {
        head = newtail;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newtail;
    newtail->prev = temp;
}

void insertAtMiddle(Node* &head, Node* &tail, int pos, int newdata2) {
    if (pos == 1) {
        insertAtHead(head, newdata2);
        return;
    }

    Node* temp = head;

    int i = 1;
    while (i<pos - 1) {
        temp = temp->next;
        i++;
    }

    if(temp->next == NULL) {
        insertAtTail(tail, newdata2);
        return;
    }

    Node* newnode1 = new Node(newdata2);
    newnode1->next = temp->next;
    newnode1->next->prev=newnode1;
    temp->next = newnode1;
    newnode1->prev = temp;
}

void deleteElement(Node* &head , int pos ){
    if(head == NULL){
        return;
    }

    if(pos == 1){
        delete(head);
        return;
    }
    Node* temp = head;
    int i=1;
    while(temp != NULL){
        temp = temp -> next;
        i++;
    }

    temp -> prev -> next = temp -> next;

    while(temp-> next == NULL){
        temp -> next -> prev = temp -> prev;
        delete(temp);
    }


    Node* newnode = head;
    head = head -> next;
    newnode -> next = NULL;
    delete(newnode);
    
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
 
    insertAtHead(head, 1);  

    insertAtHead(head, 2);  
    insertAtTail(tail, 5);   
    insertAtMiddle(head,tail, 2, 4);  

    deleteElement(head,2);

    printList(head);  
    printList(tail);  

    return 0;
}
