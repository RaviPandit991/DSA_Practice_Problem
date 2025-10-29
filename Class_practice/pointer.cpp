#include<iostream>
using namespace std;
class student{
    private: 
        int age,rollno;
    public:
        void setvalue(int age,int rollno){
            this->age=age;
            this->rollno=rollno;
        }
        void getvalue(){
            cout<<age<<" "<<rollno<<endl;
        }
};
int main(){
    int size = 5;
    student *s=new student[size];
    

    for(int i=0;i<size;i++){
        int a,b;
        cin>>a>>b;
        s[i].setvalue(a,b);
    }

    for(int i=0;i<size;i++){
        s[i].getvalue();
    }
}