#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void insertpos(Node* head,int pos,Node* newNode){
    for(int i=1;i<pos-1;i++){
        head = head->next;
    }
    Node* temp = head->next;
    head->next = newNode;
    newNode->next = temp;
}
int main(){
    Node* head = new Node(4);
    head->next = new Node(6);
    head->next->next = new Node(7);
    head->next->next->next = new Node(8);
    int pos = 3;
    Node* newNode = new Node(5);
    insertpos(head,pos,newNode);
    display(head);
} 