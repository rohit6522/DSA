#include<iostream>
using namespace std;

class Node{
    int data;
    Node *next;

    Node (int val){
        this -> data = val;
        this -> next = NULL;
    }


};

int main(){
    Node* newnode = new Node(5);
    
}