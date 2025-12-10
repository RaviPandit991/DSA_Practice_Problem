#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int v){
        data = v;
        left = nullptr;
        right = nullptr;
    }
};

void sum_of_levels(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        int levelSum = 0;

        while(size--){
            Node* temp = q.front();
            q.pop();

            levelSum += temp->data;

            if(temp->left)  q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }

        cout << levelSum <<endl;
    }
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
    root->right->right = rightnode2;
    sum_of_levels(root);
}