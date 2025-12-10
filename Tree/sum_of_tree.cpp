#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
void Print_tree(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    Print_tree(root->left);
    Print_tree(root->right);
}
//using void function;
void sum_of_tree(Node* root,int &sum){
    if(root == NULL){
        return;
    }
    sum+=root->data;
    sum_of_tree(root->left,sum);
    sum_of_tree(root->right,sum);
}

// using return function;
int sum_of_tree2(Node* root){
    if(root == NULL){
        return 0;
    }
    return root->data+sum_of_tree2(root->left)+sum_of_tree2(root->right);
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
    //Print_tree(root);
    // int sum =0;
    // sum_of_tree(root,sum);
    // cout<<sum;
    int sum = sum_of_tree2(root);
    cout<<sum;
}