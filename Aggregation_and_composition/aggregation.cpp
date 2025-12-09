#include<iostream>
using namespace std;
class student{
    public:
    string name;

    student(string nameofstudent){
        name = nameofstudent;
        cout<<"This is Student"<<endl;
    }
};

class college{
    public:
    student *s;

    college(student *st){
        s = st;
        cout<<"College is here"<<endl;
    }

    void print(){
        cout<<"Hello a am : "<<s->name;
    }
};
int main(){
    student s("Ravi");
    college c(&s);
    c.print();
}