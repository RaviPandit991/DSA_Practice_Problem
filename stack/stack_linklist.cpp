#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};
class stack{
    public:
    Node* top;
    stack(){
        top = nullptr;
    }

    void push(int x){
        Node* newnode = new Node(x);
        newnode->next = top;
        top = newnode;
    }

    void pop(){
        Node* temp = top;
        top = top->next;
        delete(temp);
    }
    void travese(){
        Node* temp = top;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.travese();
    st.pop();
    st.travese();
}