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
//Method 1 for level_order for advance purpose;
void levelorder1(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        int sum = 0;
        for(int idx=1;idx<=size;idx++){
            Node* node = q.front();
            q.pop();
            sum+=node->data;
        if(node->left!=nullptr)q.push(node->left);
        if(node->right!=nullptr)q.push(node->right);    
        }
        cout<<"The sum of level : "<<sum<<endl;
    }
}
//method 2 for level_order for simple purpose;
void levelorder2(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        cout<<node->data<<" ";
        if(node->left!=nullptr)q.push(node->left);
        if(node->right!=nullptr)q.push(node->right);
    }
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
    levelorder1(root);
    levelorder2(root);
}
