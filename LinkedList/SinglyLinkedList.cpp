#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    // create constructor
    node(int val){
        // data = val;
        // next = NULL;
        this -> data = val;
        this -> next = NULL;
    }
};

void insertAtHead(node*  &head, int data1){
    // creating new node
    node* temp = new node(data1);

    temp -> next = head;
    head = temp;

}

void insertAtTail(node* &tail , int t){
    node* temp = new node(t);
    tail -> next = temp;
    tail = temp;
}



void insertAtMiddle(node* &head, int position,int value){
    node* newnode= new node(value); // 5
    node* tempt =head; // 5

    int i=1;
    while(i<position-1){
        tempt = tempt -> next;
        i++;
    }
    newnode ->next=tempt ->next;
    tempt -> next = newnode;
    
}

void deleteAtHead(node* &head){
    
    if(head == NULL){
        return;
    }
    node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    delete(temp);
}

void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(){
    node* node1 = new node(50);
    // for middle
    node* node2 = new node(60);

    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    // head pointed to node
    node* head = node1;
    node* tail = node1;


    insertAtHead(head , 90);
    insertAtHead(head , 40);
    insertAtTail(tail,8);
    insertAtTail(tail,10);
    
    print(head);
    return 0;
}