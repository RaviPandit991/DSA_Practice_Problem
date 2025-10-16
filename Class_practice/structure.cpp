#include<iostream>
using namespace std;
struct student{
    public:
        int rollno;
        int regno;
        string name;
};
int main(){
    student s1;
    s1.name="Ravi";
    s1.rollno=03;
    s1.regno=12401796;
    cout<<s1.name;
}