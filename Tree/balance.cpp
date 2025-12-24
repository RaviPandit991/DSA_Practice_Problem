#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node* root, bool &isBalance){
    if(root == NULL) return 0;

    int lh = height(root->left, isBalance);
    int rh = height(root->right, isBalance);

    if(abs(lh - rh) > 1){
        isBalance = false;
    }

    return 1 + max(lh, rh);
}

int main(){
    Node* root = new Node(1);
    Node* leftnode = new Node(2);
    Node* rightnode = new Node(3);
    root->left = leftnode;
    root->right = rightnode;

    Node* leftnode2 = new Node(4);
    Node* rightnode2 = new Node(5);
    Node* newNode = new Node(7);
    root->left->left = leftnode2;
    root->left->right = rightnode2;
    root->left->left->left = newNode;

    bool isBalanced = true;
    height(root, isBalanced);

    if(isBalanced) 
        cout << "Tree is Balanced";
    else 
        cout << "Tree is unBalanced";

    return 0;
}
