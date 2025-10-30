#include<iostream>
#include<limits.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int a){
        data=a;
        next=nullptr;
    }
};
void printcircular(Node* &head){
    Node* p =head;
    while(p->next!=nullptr){
        p=p->next;
    }
    p->next=head;
}

void sum(Node* head){
    Node*p = head;
    int min=INT_MAX;
    int max=INT_MIN;
    int sum=0;
    int count=0;
    do{
        if(min>p->data){
            min=p->data;
        }
        if(max<p->data){
            max=p->data;
        }
        count++;
        sum+=p->data;
        p=p->next;
    }while(p!=head);
    cout<<"The sum of all Node : "<<sum<<endl;
    cout<<"The min of all Node : "<<min<<endl;
    cout<<"The max of all Node : "<<max<<endl;
    cout<<"Total count of element : "<<count;
}
int main(){
    Node* head = new Node(12);
    head->next = new Node(15);
    head->next->next = new Node(19);
    head->next->next->next = new Node(17); 
    head->next->next->next->next = new Node(21); 
    printcircular(head);
    sum(head);
}