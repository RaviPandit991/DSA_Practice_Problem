//priroty of constructor and distructor in child class and parents class
#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"Parent class constructor called"<<endl;
    }

    ~parent(){
        cout<<"Parent class distructor called"<<endl;
    }
};

class child : public parent{
    public:
    child(){
        cout<<"Child class constructor called"<<endl;
    }

    ~child(){
        cout<<"Child class distructor called"<<endl;
    }
};
int main(){
    child c;
}