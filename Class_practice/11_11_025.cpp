#include<iostream>
using namespace std;
class student{
public:
    int rollno;
    string name;

    student(){
        cout<<"Hello"<<endl;
    }

    student(int a){
        rollno = a;
    }

    ~student(){
        cout<<"removed"<<endl;
    }
};
int main(){
    student s1;
    s1.name="Ravi";
    s1.rollno=21;
    cout<<s1.name<<endl;
    
}