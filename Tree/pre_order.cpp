#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
 void preorder(Node* root){
     if(root == NULL){
         return;
     }
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
 }
int main(){
    Node* root = new Node(1);
    Node* leftNode = new Node(2);
    Node* rightNode = new Node(3);
    Node* leftNode1 = new Node(4);
    Node* rightNode1 = new Node(5);
    root->left = leftNode;
    root->right = rightNode;
    root->left->left = leftNode1;
    root->left->right = rightNode1;
    preorder(root);
}
