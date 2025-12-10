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
//using void function
void count_of_element(Node* root,int &count){
    if(root == NULL){
        return;
    }
    count++;
    count_of_element(root->left,count);
    count_of_element(root->right,count);
}
//using int function
int count_of_element2(Node* root,int count){
    if(root == NULL){
        return 0;
    }
    count++;
    return count+count_of_element2(root->left,0)+count_of_element2(root->right,0);
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
    int count = 0;
    //count_of_element(root,count);
    int value = count_of_element2(root,count);
    cout<<value;
}