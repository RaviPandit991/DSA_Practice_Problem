//double linklist 
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int a){
        data = a;
        next = nullptr;
        prev = nullptr;
    }
};
void printll(Node* head){
    Node* p = head;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
}
void insertion(Node* head,int pos,int val){
    Node *p=head;
    Node *q=nullptr;
    for(int i=1;i<pos;i++){
        q=p;
        p=p->next;
    }
    Node *newnode = new Node(val);
    newnode->next=p;
    q->next=newnode;
    p->prev = newnode;
    newnode->prev = q;
}
int main(){
    Node* head = new Node(12);
    head->next = new Node(23);
    head->next->prev = head;

    head->next->next = new Node(25);
    head->next->next->prev = head->next;
    int val=30;
    int pos = 3;
    insertion(head,pos,val);
    printll(head);
}