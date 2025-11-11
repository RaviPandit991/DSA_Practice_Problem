#include<iostream>
using namespace std;
class stack{
    public:
    int arr[100];
    int top;
    stack(){
        top=-1;
    }

    void push(int value){
        if(top==100){
            cout<<"Stack Overflow";
        }else{
            top++;
            arr[top]=value;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is empty";
        }else{
            top--;
        }
    }

    int peek(){
        if(top==-1){
            return -1;
        }else{
            return arr[top];
        }
    }

    void traverse(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    stack st;
    st.push(20);
    st.push(50);
    st.push(30);
    st.push(10);
    st.push(70);
    //st.traverse();
    st.pop();
    st.traverse();
}