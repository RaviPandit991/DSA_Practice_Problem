#include<iostream>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
void zig_zag(Node* root){
     
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
}