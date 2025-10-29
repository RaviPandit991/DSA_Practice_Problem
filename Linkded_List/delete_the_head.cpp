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
void delete_head(Node* &head){
    Node*p=head;
    head=head->next;
    delete(p);
}

int main(){
    Node* head= new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next= new Node(7);
    Node* p = head;
    cout<<head->data<<endl;
    delete_head(head);
    cout<<head->data;
}