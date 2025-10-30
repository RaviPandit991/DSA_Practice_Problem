#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int a){
        data=a;
        next=nullptr;
    }
};
void printll(Node* head){
    Node* p = head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }
    while(p != head);
}
void printcircular(Node* &head){
    Node* p =head;
    while(p->next!=nullptr){
        p=p->next;
    }
    p->next=head;
}
void insertLLhead(Node* &head){
    Node* p = head;
    Node* q;
    do{
        q=p;
        p=p->next;
    } while(p->data != head->data);
    Node* newNode = new Node(10);
    newNode->next = p;
    q->next=newNode;
    head=newNode;
}
int main(){
    Node* head = new Node(12);
    head->next = new Node(15);
    head->next->next = new Node(19);
    head->next->next->next = new Node(17); 
    head->next->next->next->next = new Node(21); 
    printcircular(head);
    insertLLhead(head);
    printll(head);
}