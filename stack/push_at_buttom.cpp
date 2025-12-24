#include<bits/stdc++.h>
using namespace std;
void print(stack<int>st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void insert(int pos, int val, stack<int>&st){
    stack<int>temp;
    while(st.size()>=pos){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(50);
    st.push(60);
    print(st);
    insert(3,30,st);
    cout<<endl;
    print(st);
}