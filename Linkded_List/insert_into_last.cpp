#include<iostream>
using namespace std;
struct  Node{
    int data;
    Node *next;

    Node(int a){
        data=a;
        next=nullptr;
    }
};
void insert_into_last(Node* head,int pos,int val){
    Node *p=head;
    Node *q=nullptr;
    for(int i=1;i<pos;i++){
        q=p;
        p=p->next;
    }
    Node *newnode = new Node(val);
    newnode->next=q;
    q->next=newnode;
}

int main(){
    Node* head= new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next= new Node(7);
    int val=9,pos=5;
    Node* p = head;
    insert_into_last(head,pos,val);
    for(int i=0;i<5;i++){
        cout<<p->data;
        p=p->next;
    }
}