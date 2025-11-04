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
void delete_head(Node* &head){
    Node*p=head;
    head=head->next;
    head->prev=nullptr;
    delete(p);
}
void insertion_head(Node* &head,int val){
    Node *p=head;
    Node *newnode = new Node(val);
    newnode->next=p;
    p->prev = newnode;
    newnode->prev = nullptr;
    head=newnode;
}
void insertion_last(Node* &head,int val){
    Node* p=head;
    while(p->next!=nullptr){
        p=p->next;
    }
    Node* newnode = new Node(30);
    p->next=newnode;
    newnode->prev=p;
    newnode->next=nullptr;
}
void delete_ap(Node* head,int pos){
    Node* p = head;
    for(int i=1;i<pos;i++){
        p=p->next;
    }
    p->next->prev=p->prev;
    p->prev->next=p->next;
    delete(p);

}
void find_the_mid(Node* head){
    Node* p = head;
    Node* q = head;
    while(p->next!=nullptr && p->next->next!=nullptr){
        p=p->next->next;
        q=q->next;
    }
    cout<<q->data;
}
int main(){
    Node* head = new Node(5);
    head->next = new Node(1);
    head->next->prev = head;

    head->next->next = new Node(10);
    head->next->next->prev = head->next;
    int val=30;
    int pos = 2;
    // insertion_head(head,val);
    // delete_head(head);
    // delete_ap(head,pos);
    // insertion_last(head,val);
    find_the_mid(head);
    // printll(head);
}