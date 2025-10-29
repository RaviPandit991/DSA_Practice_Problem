#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int a){
        data=a;
        next=NULL;
    }
};
void insertioninll(Node* head,int pos,int val){
    Node* p = head;
    Node* q = nullptr;
    
    for(int i=1;i<pos;i++){
        q=p;
        p=p->next;
    }
    Node* newNode = new Node(val);
    newNode ->next = p;
    q->next = newNode;
}
int main(){
    Node* head = new Node(12);
    head->next = new Node(22);
    head->next->next = new Node(23);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(2);
    Node* p =head;
    for(int i=0;i<5;i++){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    p=head;
    insertioninll(head,2,4);
    for(int i=0;i<6;i++){
        cout<<p->data<<" ";
        p=p->next;
    }
    
}