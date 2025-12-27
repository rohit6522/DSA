#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
    Node* insertBST(Node* root,int d){
        if(root == NULL){
            return new Node(d);
        }

        if(d < root->data){
            root->left = insertBST(root->left,d);
        }else{
            root->right = insertBST(root->right,d);
        }
        return root;
    }
    void inOrder(Node* &root){
        if(root == NULL){
            return;
        }
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);

    }

    // search key present or not

    bool searchBST(Node* root, int key){
        if(root == NULL){
            return false;
        }
        if(key == root->data){
            return true;
        }
        
        if(key < root->data){
            return searchBST(root->left,key);
        }else{
            return searchBST(root->right,key);
        }
    }
    
int main(){
    Node* root = new Node(10);
    root = insertBST(root,5);
    root = insertBST(root,20);
    root = insertBST(root,1);
    root = insertBST(root,7);
    root = insertBST(root,9);

    // inOrder(root);
    
    cout << searchBST(root,4);


}