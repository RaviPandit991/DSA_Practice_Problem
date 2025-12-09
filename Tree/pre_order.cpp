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
 int preorder(Node* root, int sum){
     if(root == NULL)return;
     //cout<<root->data<<" ";
     sum+=root->data;
     preorder(root->left,sum);
     preorder(root->right,sum);
     return sum
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
    int sum=0;
    int n = preorder(root,sum);
    cout<<n;
}
