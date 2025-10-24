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

void printll(Node* head){
    Node *p = head;
    int result=0;
    int min= p->data;
    int max= p->data;
    int count=0;
    while(p!=NULL){
        if(min>p->data){
            min=p->data;
        }else if(max<p->data){
            max=p->data;
        }
        result+=p->data;
        p = p->next;
        count++;

    }
    cout<<result<<endl;
    cout<<min<<endl;
    cout<<max;
}
int main(){
    Node* head = new Node(12);
    head->next = new Node(22);
    head->next->next = new Node(23);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(2);
    printll(head);
}