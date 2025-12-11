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

void printleftview(Node* root,int level,vector<int>&arr){
    if(!root)return;
    if(arr[level] == -1){
        cout<<root->data<<" ";
        arr[level]=1;
    }
    printleftview(root->right,level+1,arr);
    printleftview(root->left,level+1,arr);
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
    vector<int> arr(10,-1);
    printleftview(root,0,arr);
}
