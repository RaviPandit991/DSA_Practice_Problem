#include<iostream>
#include<bits/stdc++.h>
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

void leaf_of_tree(Node* root,int &count){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL)count++;
    leaf_of_tree(root->left, count);
    leaf_of_tree(root->right, count);
}
int main(){
    Node* root = new Node(1);
    Node* leftnode = new Node(2);
    Node* rightnode = new Node(3);
    root->left = leftnode;
    root->right = rightnode;
    Node* leftnode2 = new Node(4);
    Node* rightnode2 = new Node(5);
    root->left->left = leftnode2;
    root->left->right = rightnode2;
    Node* leftnode3 = new Node(6);
    Node* rightnode3 = new Node(7);
    root->right->left = leftnode3;
    root->right->right = rightnode3;
    int count = 0;
    leaf_of_tree(root,count);
    cout<<count;
}