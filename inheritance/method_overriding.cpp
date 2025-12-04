#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"meow";
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Bark";
    }
};

int main(){
    Dog d;
    d.speak();
}