#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int a){
        data= a;
        next= nullptr;
    }
};

int main(){
    Node* head = new Node(12);
    head->next = new Node(22);
    head->next->next = new Node(23);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(2);
    Node* slow=head;
    Node* fast=head;
    bool flag = false;
    while(fast->next!=nullptr && fast->next->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            flag = true;
        }
    }
    if(flag){
        cout<<"yes";
    }else{
        cout<<"No";
    }
}